#include <string.h>
#include <stdio.h>

char *ft_strchr(char *str, char c)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    return (0);
}

int main(void)
{
    printf("mine = %s \n", ft_strchr("abcdefg", 'z'));
    printf("original = %s\n", strchr("abcdefg", 'z'));

}