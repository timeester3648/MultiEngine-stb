#define STB_IMAGE_IMPLEMENTATION
#include <MultiEngine/core/memory/MemoryAllocation.h>

#define STBI_MALLOC(sz)           MultiEngine::memory_allocate(sz)
#define STBI_REALLOC(p,newsz)     MultiEngine::memory_reallocate(p,newsz)
#define STBI_FREE(p)              MultiEngine::memory_free(p)

#include "stb_image.h"