#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *ptr_dst = dst;
    const unsigned char *ptr_src = src;
    while (n--)
        *ptr_dst++ = *ptr_src++;
    return (dst);
}

// int main(void)
// {
//     char src[6] = "12345";
//     char dst[11] = "12345678";
//     ft_memcpy(dst, src, sizeof(src));
//     printf("Result FT = %s \n", dst);
    
//     char destination[11];
//     memcpy(destination, src, sizeof(src));
//     printf("Result Original = %s \n", destination);
// }