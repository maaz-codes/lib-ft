#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int is_present(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *temp;

	if (!s1 || !set)
		return (NULL);
	i = -1;
	temp = ft_strdup(s1);
	while (++i <= ft_strlen(s1))
	{
		if (is_present(s1[i], set))
			temp = ft_substr(s1, i + 1, ft_strlen(s1) + 1);
		else
			break;
	}
	i = ft_strlen(temp);
	while (--i)
	{
		if (is_present(temp[i], set))
			temp = ft_substr(temp, 0, i);
		else 
			break;
	}
	if (!temp)
		return (NULL);
	return (temp);
}

// int main(void)
// {
//     printf("Result MAAZ = %s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", "te"));
// }