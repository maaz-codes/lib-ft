#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    size_t i;

    if (!s || !len || start >= ft_strlen(s))
        return (ft_strdup(""));
    if (start + len > ft_strlen(s))
        substring = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
    else 
        substring = malloc(sizeof(char) * len + 1);
    if (!substring)
        return (NULL);
    i = 0;
    while (i < len && s[start] != '\0')
    {
        substring[i] = s[start];
        i++;
        start++;
    }
    substring[i] = '\0';
    return (substring);
}

// int main(void)
// {
//     char *s = "123";
//     char *substring = ft_substr(s, 1, 5);
//     printf("Substring = %s\n", substring);
// }