#define STB_TRUETYPE_IMPLEMENTATION
#include <MultiEngine/core/memory/MemoryAllocation.h>

#define STBTT_malloc(x,u)           MultiEngine::memory_allocate(x)
#define STBTT_free(x,u)             MultiEngine::memory_free(x)

#include "stb_truetype.h"