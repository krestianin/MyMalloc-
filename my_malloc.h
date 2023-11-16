#include <stddef.h>
#define MEMORY_SIZE 1024

struct MemoryBlock {
    size_t size;
    int status; // 0 for free, 1 for allocated
    void* memory;
};

void initializeMemory();
void* myMalloc(size_t size);
void myFree(void* ptr);