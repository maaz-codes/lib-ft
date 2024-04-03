#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
        i++;
    if (n == i)
        i--;
    if (s1[i] > s2[i])
        return(1);
    else if (s1[i] < s2[i])
        return (-1);
    return (0);
}

// int main(void)
// {
//     printf("FT = %d \n", ft_strncmp("1230000", "12345", 4));
//     printf("original = %d\n", strncmp("1230000", "12345", 4));
// }