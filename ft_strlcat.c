#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t len_dst;
    size_t len_src;

    i = 0;
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (!dstsize || len_dst > dstsize)
        return (dstsize + len_src);
    while (src[i] && (len_dst + i) < (dstsize - 1))
    {
        dst[len_dst + i] = src[i];
        i++;
    }
    dst[len_dst + i] = '\0';
    return (len_src + len_dst);
}

// int main(void)
// {
//     char dest[10] = "a";

//     // printf("FT = %s || return = %lu \n", dest, ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
//     printf("Original =  %s || return = %lu \n", dest, strlcat(dest, "lorem ipsum dolor sit amet", 0));
// }