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

static int is_present(char c, const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *ptr;
    
    ptr = (char *)malloc(sizeof(char) * ft_strlen(s1));
    if (!ptr)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        if (!is_present(s1[i], set))
        {
            ptr[j] = s1[i];
            j++;
        }
        i++;
    }
    return (ptr);
}

// int main(void)
// {
//     printf("Result = %s\n", ft_strtrim("Hello World, I am computer.", "ll"));
// }