#define STB_IMAGE_RESIZE_IMPLEMENTATION
#include <MultiEngine/core/memory/MemoryAllocation.h>

#define STBIR_MALLOC(sz)           MultiEngine::memory_allocate(sz)
#define STBIR_REALLOC(p,newsz)     MultiEngine::memory_reallocate(p,newsz)
#define STBIR_FREE(p)              MultiEngine::memory_free(p)

#include "stb_image_resize2.h"