#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static size_t ft_strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return(len);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len = dstsize;
    size_t len2 = ft_strlen(src);

    unsigned int i = 0;
    while (i < len)
    {
        dst[len + 1] = src[i];
        i++;
    }
    dst[i] = '\0';
    len = ft_strlen(dst);
    return (len + len2);
}

// int main(void)
// {
//     char src[10] = "Hello";
//     char dst[10] = "Maaz";

//     printf("FT =        %s || return = %lu \n", dst, ft_strlcat(dst, src, sizeof(dst)));
//     printf("Original =  %s || return = %lu \n", dst, strlcat(dst, src, 5));
// }