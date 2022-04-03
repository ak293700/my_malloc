#include <stddef.h>

void *beware_overflow(void *ptr, size_t nmemb, size_t size)
{
    size_t total_size = 0;
    if (__builtin_umull_overflow(nmemb, size, &total_size))
        return NULL;

    return (char *)ptr + total_size;
}
