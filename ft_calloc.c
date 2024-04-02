#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    char *ptr;

    ptr = (char *)malloc(count * size);
    return (ptr);
}