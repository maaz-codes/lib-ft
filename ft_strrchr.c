#include <string.h>
#include <stdio.h>

char *ft_strrchr(char *str, char c)
{
    int i = 0;
    int ctr = -1;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            ctr = i;
        i++;
    }
    if (ctr != -1)
        return (str + ctr);
    return (0);
}

int main(void)
{
    printf("mine = %s \n", ft_strrchr("abfcdefg", 'g'));
    printf("original = %s\n", strrchr("abfcdefg", 'g'));
}