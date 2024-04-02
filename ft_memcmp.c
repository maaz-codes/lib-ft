#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
    const unsigned char *ptr1 = s1;
    const unsigned char *ptr2 = s2;
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

int main(void)
{
    char s1[10] = "Maaz";
    char s2[10] = "Maaz";
    printf("Result FT = %d \n", ft_memcmp(s1, s2, sizeof(s1)));
    printf("Result Original = %d \n", memcmp(s1, s2, sizeof(s1)));
}