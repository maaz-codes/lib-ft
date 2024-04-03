#include <string.h>
#include <stdio.h>
// #include "libft.h"

static size_t ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

char *ft_strrchr(const char *s, int c)
{
    int i;
    size_t len;
   
    i = 0;
    len = ft_strlen(s);
    while (i <= len)
    {
        if (s[i] == c)
            return ((char *) s + i);
        i++;
    }
    return (NULL);
}

// int main(void)
// {
//     printf("FT = %s \n", ft_strrchr("abcdefg", '\0'));
//     printf("original = %s\n", strrchr("abcdefg", '\0'));
// }