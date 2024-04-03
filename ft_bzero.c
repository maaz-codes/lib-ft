#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = s;
    while (n--)
    {
        *ptr++ = 0;
    }
}

// int main(void)
// {
//     int s1[6];

//     ft_bzero(s1, sizeof(s1));
//     int i = 0;
//     printf("FT =        ");
//     while (i < 6)
//     {
//         printf("%d ", s1[i]);
//         i++;
//     }
//     printf("\n");
//     ///////////////////////////////////
//     int s2[6];
//     bzero(s2, sizeof(s2));
//     i = 0;
//     printf("Original =  ");
//     while (i < 6)
//     {
//         printf("%d ", s1[i]);
//         i++;
//     }
//     printf("\n");
// }