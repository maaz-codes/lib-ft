#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

// int main(void)
// {
//     printf("character = %c\n", ft_tolower('A'));
//     printf("character = %c\n", tolower('A'));
// }