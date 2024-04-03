#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    size_t i;

    substring = (char *)malloc(sizeof(char) * len);
    i = 0;
    if (!substring)
        return NULL;
    while (i < len && s[start] != '\0')
    {
        substring[i] = s[start];
        i++;
        start++;
    }
    return (substring);
}

// int main(void)
// {
//     char *s = "Hello World, I am computer.";
//     char *substring = ft_substr(s, 6, 11);
//     printf("Substring = %s\n", substring);
// }