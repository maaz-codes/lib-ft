#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    while (i <= ft_strlen(s))
    {
        if (s[i] == c)
            return ((char *) s + i);
        i++;
    }
    return (0);
}

// int main(void)
// {
//     printf("FT = %s \n", ft_strchr("abcdefg", 'g'));
//     printf("original = %s\n", strchr("abcdefg", 'g'));

// }