#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    
    i = 0;
    if (!dst || !src || !dstsize)
        return (ft_strlen(src));
    while ((i < dstsize - 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

// int main(void)
// {
//     char src[6] = "Hello";
//     char dst[3];

//     printf("Original =  %s || return = %lu \n", dst, strlcpy(dst, src, sizeof(dst)));
//     printf("FT =        %s || return = %zu \n", dst, ft_strlcpy(dst, src, sizeof(dst)));
// }