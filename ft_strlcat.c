#include <string.h>
#include <stdio.h>

static unsigned int ft_strlen(char *str)
{
    unsigned int len = 0;
    while (str[len] != '\0')
        len++;
    return(len);
}

unsigned long ft_strlcat(char *restrict dst, const char * restrict src, unsigned int dstsize)
{
    unsigned long len = ft_strlen(dst);
    unsigned int i = 0;
    while (i < len)
    {
        dst[len + 1] = src[i];
        i++;
    }
    dst[i] = '\0';
    len = ft_strlen(dst);
    return (len);
}

int main(void)
{
    char src[10] = "Hello";
    char dst[10] = "Maaz";

    // printf("FT =        %s || return = %lu \n", dst, ft_strlcat(dst, src, sizeof(dst)));
    printf("Original =  %s || return = %lu \n", dst, strlcat(dst, src, 5));
}