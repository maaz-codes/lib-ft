#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n--)
    {
        if (*ptr == (unsigned char)c)
            return ((void *)ptr);
        ptr++;
    }
    return (NULL);
}

// int main(void)
// {
//     int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("FT = %s \n", (char *)ft_memchr(tab, -1, 7));
//     printf("Original = %s \n", (char *)memchr(tab, -1, 7));
//     // char buffer[11] = "0123456789";
//     // char *result;
//     // result = ft_memchr(buffer, '4', sizeof(buffer));
//     // printf("Result FT = %s \n", result);
//     // result = memchr(buffer, '4',sizeof(buffer));
//     // printf("Result Original = %s \n", result);
// }