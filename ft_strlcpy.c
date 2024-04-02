#include <string.h>
#include <stdio.h>

static unsigned int ft_strlen(char *str)
{
    unsigned int len = 0;
    while (str[len] != '\0')
        len++;
    return(len);
}

unsigned int ft_strlcpy(char *restrict dst, const char * restrict src, unsigned int dstsize)
{
    unsigned char *ptr1 = dst;
    unsigned char *ptr2 = src;
    unsigned int len = ft_strlen(src);
    while (dstsize--)
    {
        *ptr1++ = *ptr2++;
    }
    // *ptr1 = '\0';
    return (len);
}

int main(void)
{
    char src[6] = "Hello";
    char dst[6];

    printf("FT =        %s || return = %d \n", dst, ft_strlcpy(dst, src, sizeof(dst)));
    printf("Original =  %s || return = %d \n", dst, strlcpy(dst, src, sizeof(dst)));
}