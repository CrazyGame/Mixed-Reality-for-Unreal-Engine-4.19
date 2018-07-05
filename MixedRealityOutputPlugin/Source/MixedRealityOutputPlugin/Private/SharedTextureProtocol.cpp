#include "pch.h"
#include "SharedTextureProtocol.h"
#include <TextureResource.h>
#include <cstdint>
#include <string>

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include "Windows/WindowsHWrapper.h"
//#include <Windows.h>
#include <d3d11.h>

struct shared_texture_info_v1
{
  uint32_t version;
  uint32_t width;
  uint32_t height;
  uint32_t color_space;
  uint64_t texture_handle;
  bool active;
};
#define SHM_NAME L"liv-client-shared-texture-info"

struct shared_texture_state
{
  shared_texture_state()
  {
    auto pid = ::GetCurrentProcessId();
    shm_handle = ::CreateFileMappingW(
      INVALID_HANDLE_VALUE,
      nullptr,
      PAGE_READWRITE,
      0,
      sizeof(shared_texture_info_v1),
      (SHM_NAME + std::to_wstring(pid)).c_str()
    );

    if (shm_handle == nullptr)
      return;

    shm_data = (shared_texture_info_v1*)::MapViewOfFile(
      shm_handle,
      FILE_MAP_ALL_ACCESS,
      0,
      0,
      sizeof(shared_texture_info_v1)
    );

    if (shm_data == nullptr)
      return;

    shm_data->version = 1;
  }
  
  ~shared_texture_state()
  {
    if (shm_data)
    {
      ::UnmapViewOfFile(shm_data);
      shm_data = nullptr;
    }

    if (shm_handle)
    {
      ::CloseHandle(shm_handle);
      shm_handle = nullptr;
    }
  }

  bool valid()
  {
    return shm_data != nullptr;
  }

  HANDLE shm_handle = nullptr;
  shared_texture_info_v1* shm_data = nullptr;
};

static shared_texture_state g_shtex_state;

bool SharedTextureProtocol::active()
{
  return g_shtex_state.valid() && g_shtex_state.shm_data->active;
}

int SharedTextureProtocol::width()
{
  if (g_shtex_state.valid())
    return g_shtex_state.shm_data->width;

  return 0;
}

int SharedTextureProtocol::height()
{
  if (g_shtex_state.valid())
    return g_shtex_state.shm_data->height;

  return 0;
}

void SharedTextureProtocol::set_texture(UTextureRenderTarget2D* texture)
{
  if (!g_shtex_state.valid())
    return;
  auto resource = texture->Resource->TextureRHI->GetNativeResource();
  if (!resource)
    throw std::runtime_error("No resource!");

  auto tex = static_cast<ID3D11Texture2D*>(resource);
  IDXGIResource* dxgi_resource = nullptr;
  auto result = tex->QueryInterface(
    __uuidof(IDXGIResource),
    (void**)&dxgi_resource
  );
  if (FAILED(result))
    throw std::runtime_error("Can't query DXGI resource!");

  HANDLE tex_handle;
  result = dxgi_resource->GetSharedHandle(&tex_handle);
  dxgi_resource->Release();
  if (FAILED(result))
    throw std::runtime_error("Can't get shared handle");

  g_shtex_state.shm_data->texture_handle = reinterpret_cast<uint64_t>(tex_handle);
}