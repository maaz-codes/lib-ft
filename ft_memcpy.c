#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *ptr1;
    char const *ptr2;

    if (!dst && !src)
        return (NULL);
    ptr1 = (char *)dst;
    ptr2 = (char *)src;
    i = 0;
    while (i < n)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
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