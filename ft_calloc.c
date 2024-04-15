#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (!count || !size)
        return (NULL);

    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

int main(void)
{
    char *ptr = ft_calloc(4, 4);
    int i = 0;
    while (i <= 16)
    {
        printf("%c", ptr[i]);
        i++;
    }
}