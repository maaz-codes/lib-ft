#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

int main(void)
{
    printf("anwer = %d \n", ft_isdigit('3'));
    printf("anwer = %d \n", isdigit('3'));

}