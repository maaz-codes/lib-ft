#include <stdio.h>
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

// static void ft_upper_case(unsigned int i, char *c)
// {
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main(void)
// {
//     char s[100] = "Hello world!";
//     ft_striteri(s, ft_upper_case);
//     printf("New string = %s\n", s);
// }