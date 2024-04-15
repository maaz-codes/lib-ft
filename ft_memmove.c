#include <string.h>
#include <stdio.h>
#include "libft.h"

// void *ft_memmove(void *dst, const void *src, size_t len)
// {
//     char *ptr1;
//     char *ptr2;
    
//     ptr1 = (char *)dst;
//     ptr2 = (char *)src;
//     if (dst > src)
//     {
//         while (len--)
//             *ptr1++ = *ptr2++;
//     }
//     else
//         ft_memcpy(dst, src, len);
//     return (dst);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst > src)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy (dst, src, len);
	return (dst);
}

// int main(void)
// {
//     char src[10] = "abc";
//     char dst[10] = "123456";
//     char *original1;
//     char *original2;
//     original2 = ft_memmove(dst, src, sizeof(src));
//     printf("Result FT =             %s \n", dst);
//     printf("Original Sring FT =     %s \n", original2);
    
//     original1 = memmove(dst, src, sizeof(src));
//     printf("Result Original =       %s \n", dst);
//     printf("Original String =       %s \n", original1);
// }