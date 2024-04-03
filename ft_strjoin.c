#include <stdio.h>
#include <stdlib.h>

static int ft_strlen(const char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    int total_len;
    int i;
    int j;

    total_len = ft_strlen(s1) + ft_strlen(s2);
    // printf("Malloc = %d\n", (total_len + 1));
    ptr = (char *)malloc(sizeof(char) * (total_len + 1));
    if (!ptr)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return (ptr);
}

// int main(void)
// {
//     printf("Result = %s\n", ft_strjoin("Hello", " World!"));
// }