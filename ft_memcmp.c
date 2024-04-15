#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    while (n && *ptr1 == *ptr2)
    {
        ptr1++;
        ptr2++;
        n--;
    }
    if (n == 0)
        return (0);
    return (*ptr1 - *ptr2);
}

// int main(void)
// {
//     char s1[10] = "Maaz";
//     char s2[10] = "Maaz";
//     printf("Result FT = %d \n", ft_memcmp(s1, s2, sizeof(s1)));
//     printf("Result Original = %d \n", memcmp(s1, s2, sizeof(s1)));
// }