#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, unsigned long len)
{
    unsigned char *ptr = b;
    while (len--)
        *ptr++ = c;
    return (b);
}

int main(void)
{
    char ptr[5];
    memset(ptr, 'A', sizeof(ptr));
    int i = 0;
    while (i < 5)
        printf("%c, ", ptr[i++]);
    printf("\n");
    
    printf("Ft memset = ");
    char ptr2[5];
    ft_memset(ptr2, 'A', sizeof(ptr2));
    i = 0;
    while (i < 5)
        printf("%c, ", ptr2[i++]);
    printf("\n");
}