#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <MultiEngine/core/memory/MemoryAllocation.h>

#define STBIW_MALLOC(sz)           MultiEngine::memory_allocate(sz)
#define STBIW_REALLOC(p,newsz)     MultiEngine::memory_reallocate(p,newsz)
#define STBIW_FREE(p)              MultiEngine::memory_free(p)

#include "stb_image_write.h"