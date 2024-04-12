#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
   
    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *) s + i);
        i--;
    }
    return (NULL);
}

// int main(void)
// {
//     printf("FT = %s \n", ft_strrchr("abcdefgca", 'z'));
//     printf("original = %s\n", strrchr("abcdefgca", 'z'));
// }