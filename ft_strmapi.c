#include <stdio.h>
#include <stdlib.h>

static int ft_strlen(const char *str)
{
    long len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *ptr;
    unsigned int i;

    ptr = (char *) malloc((sizeof(char) * ft_strlen(s)) + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    return (ptr);
}

// static char ft_upper_case(unsigned int i, char c)
// {
//     if (c >= 'a' && c <= 'z')
//         c -= 32;
//     return (c);
// }

// int main(void)
// {
//     const char *s = "Hello world!";
//     char *s1 = ft_strmapi(s, ft_upper_case);
//     printf("New string = %s\n", s1);
// }