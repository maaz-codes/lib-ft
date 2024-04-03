#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int number;

    i = 0;
    sign = 1;
    number = 0;
    while (str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        number = (number * 10) + (str[i] - '0');
        i++;
    }
    return (number * sign);
}

// int main(void)
// {
//     printf("Ft atoi     = %d \n", ft_atoi("-1234567890"));
//     printf("Original    = %d \n", atoi("-1234567890"));
// }