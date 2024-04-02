#include <string.h>
#include <stdio.h>

unsigned long ft_strlen(const char *str)
{
    long len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int main(void)
{
    printf("mine = %lu \n", ft_strlen("1234567"));
    printf("original = %lu\n", strlen("1234567"));
}