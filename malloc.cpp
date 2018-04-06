#include <new>
#include "dlmalloc.h"

void *
operator new(std::size_t nbytes)
{
    return dlmalloc(nbytes);
}

void *
operator new[](std::size_t nbytes)
{
    return dlmalloc(nbytes);
}

void
operator delete(void *ptr)
{
    dlfree(ptr);
}

void
operator delete[](void *ptr)
{
    dlfree(ptr);
}

void
operator delete(void *ptr, std::size_t /* size */)
{
    dlfree(ptr);
}

void
operator delete[](void *ptr, std::size_t /* size */)
{
    dlfree(ptr);
}

