#include <stdio.h>
#include <ctype.h>

char ft_toupper(unsigned char c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}

int main(void)
{
    printf("character = %c\n", ft_toupper('a'));
    printf("character = %c\n", toupper('a'));
}