#include <stdio.h>
#include <ctype.h>

char ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}

// int main(void)
// {
//     printf("character = %c\n", ft_toupper('a'));
//     printf("character = %c\n", toupper('a'));
// }