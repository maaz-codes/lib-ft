#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

// int main(void)
// {
//     printf("mine = %lu \n", ft_strlen("1234567"));
//     printf("original = %lu\n", strlen("1234567"));
// }