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

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    char *ptr1 = dst;
    const char *ptr2 = src;
    size_t len = ft_strlen(src);
    while (dstsize--)
    {
        *ptr1++ = *ptr2++;
    }
    *ptr1 = '\0';
    return (len);
}

// int main(void)
// {
//     char src[6] = "Hello";
//     char dst[6];

//     printf("FT =        %s || return = %d \n", dst, ft_strlcpy(dst, src, sizeof(dst)));
//     printf("Original =  %s || return = %d \n", dst, strlcpy(dst, src, sizeof(dst)));
// }