#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *ptr1 = dst;
    const unsigned char *ptr2 = src;
    while (len--)
    {
        *ptr1++ = *ptr2++;
    }
    return (dst);
}

// int main(void)
// {
//     char src[10] = "abc";
//     char dst[10] = "123456";
//     char *original1;
//     char *original2;
//     original2 = ft_memmove(dst, src, sizeof(src));
//     printf("Result FT =             %s \n", dst);
//     printf("Original Sring FT =     %s \n", original2);
    
//     original1 = memmove(dst, src, sizeof(src));
//     printf("Result Original =       %s \n", dst);
//     printf("Original String =       %s \n", original1);
// }