#define ALLOC(T) (T *)VirtualAlloc(0, sizeof(T), MEM_COMMIT|MEM_RESERVE, PAGE_READWRITE)
#define FREE(T, ptr) VirtualFree(ptr, 0, MEM_RELEASE)
