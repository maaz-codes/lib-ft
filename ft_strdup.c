#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *ptr;
    int i;
    
    i = 0;
    ptr = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!ptr)
        return (NULL);
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

// int main(void)
// {
//     char *s1 = "Hello";
//     char *dup = strdup(s1);
//     char *dup2 = ft_strdup(s1);

//     printf("Original = %s\n", dup);
//     printf("FT = %s\n", dup2);
// }