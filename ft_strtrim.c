#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = ft_strlen(s1) - 1;

	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	if (i == ft_strlen(s1))
		return (NULL);
	str = ft_substr(s1, i, (j - i + 1));
	return (str);
}

// int main(void)
// {
//     printf("Result MAAZ = %s\n", ft_strtrim("123456789", "1289"));
// }