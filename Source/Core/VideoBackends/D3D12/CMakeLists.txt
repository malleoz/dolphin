add_library(videod3d12
  BoundingBox.cpp
  BoundingBox.h
  DescriptorAllocator.cpp
  DescriptorAllocator.h
  DescriptorHeapManager.cpp
  DescriptorHeapManager.h
  DXContext.cpp
  DXContext.h
  DXPipeline.cpp
  DXPipeline.h
  DXShader.cpp
  DXShader.h
  DXTexture.cpp
  DXTexture.h
  DXVertexFormat.cpp
  DXVertexFormat.h
  PerfQuery.cpp
  PerfQuery.h
  Renderer.cpp
  Renderer.h
  StreamBuffer.cpp
  StreamBuffer.h
  SwapChain.cpp
  SwapChain.h
  VertexManager.cpp
  VertexManager.h
  VideoBackend.cpp
  VideoBackend.h
)

target_link_libraries(videod3d12
PUBLIC
  common
  videocommon
  videod3dcommon
)
