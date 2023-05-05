#define TINYGLTF_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "tiny_gltf.h"

#ifdef __ANDROID__
#ifdef TINYGLTF_ANDROID_LOAD_FROM_ASSETS
AAssetManager *asset_manager = nullptr;
#endif
#endif
