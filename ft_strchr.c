#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
    return (0);
}

// int main(void)
// {
//     printf("FT = %s \n", ft_strchr("abcdefg", 'z'));
//     printf("original = %s\n", strchr("abcdefg", 'z'));

// }