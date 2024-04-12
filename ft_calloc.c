#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *ptr;

    if (!count || !size)
        return (NULL);

    ptr = (char *)malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}