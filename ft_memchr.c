#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = s;
    while (n--)
    {
        if (*ptr == c)
            return ((void *)ptr); // casting to (void *) for return type.
        ptr++;
    }
    return ((void *)0);
}

// int main(void)
// {
//     char buffer[11] = "0123456789";
//     char *result;
//     result = ft_memchr(buffer, '4', sizeof(buffer));
//     printf("Result FT = %s \n", result);
//     result = memchr(buffer, '4',sizeof(buffer));
//     printf("Result Original = %s \n", result);
// }