#pragma once
#include <Engine/TextureRenderTarget2D.h>

class SharedTextureProtocol
{
public:
  bool active();
  int width();
  int height();
  void set_texture(UTextureRenderTarget2D* texture);
};