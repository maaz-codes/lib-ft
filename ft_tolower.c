#include <stdio.h>
#include <ctype.h>

char ft_tolower(unsigned char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int main(void)
{
    printf("character = %c\n", ft_tolower('A'));
    printf("character = %c\n", tolower('A'));
}