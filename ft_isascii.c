#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

int main(void)
{
    printf("anwer = %d \n", ft_isascii('3'));
    printf("anwer = %d \n", isascii('3'));

}