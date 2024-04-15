#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    while (i <= ft_strlen(s))
    {
        if (s[i] == (unsigned char)c)
            return ((char *) s + i);
        i++;
    }
    return (NULL);
}

// int main(void)
// {
//     printf("FT = %s \n", ft_strchr("teste", 'e'));
//     printf("original = %s\n", strchr("teste", 'e'));

// }