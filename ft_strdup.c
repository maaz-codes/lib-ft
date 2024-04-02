#include <string.h>
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

char *ft_strdup(const char *s1)
{
    char *ptr;
    int i;
    
    i = 0;
    ptr = (char *) malloc(sizeof(char) * ft_strlen(s1));
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main(void)
{
    char *s1 = "Hello";
    char *dup = strdup(s1);
    char *dup2 = ft_strdup(s1);

    printf("Original = %s\n", dup);
    printf("FT = %s\n", dup2);

}