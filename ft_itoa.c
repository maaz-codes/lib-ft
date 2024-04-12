#include <stdio.h>
#include <stdlib.h>

static char *memory_alloc(char *num, int i)
{
    char *ptr;
    int j;

    j = 0;
    ptr = (char *)malloc(sizeof(char) * (i + 1));
    if (!ptr)
        return NULL;
    i--;
    while (i >= 0)
        ptr[j++] = num[i--];
    ptr[j] = '\0';
    return (ptr);
}

char *ft_itoa(int n)
{
    char *ptr;
    long temp;
    char num[11];
    int i;
    
    temp = n;
    i = 0;
    if (n < 0)
        temp = temp * -1;
    if (n == 0)
        num[i++] = '0';
    while (temp != 0)
    {
        num[i++] = (temp % 10) + '0';
        temp = temp / 10;
    }
    if (n < 0)
        num[i++] = '-';
    ptr = memory_alloc(num, i);
    if (!ptr)
        return (NULL);
    return (ptr);
}

// int main(void)
// {
//     printf("Result = %s\n", ft_itoa(-2147483648));
// }