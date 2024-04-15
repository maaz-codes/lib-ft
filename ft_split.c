// #include "libft.h"
// #include <stdio.h>

// static int	wordcount(char *str, char sep)
// {
// 	int	i;
// 	int	word;

// 	word = 0;
// 	i = 1;
// 	if (!*str)
// 		return (0);
// 	while (str[i])
// 	{
// 		if ((str[i] == sep && str[i - 1] != sep)
// 			|| (str[i] != sep && str[i + 1] == '\0'))
// 			word++;
// 		i++;
// 	}
// 	return (word);
// }

// static char	**free_arr(char **arr)
// {
// 	int	i;

// 	i = 0;
// 	while (arr[i])
// 	{
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (NULL);
// }

// static char	**getwords(char **arr, char *s, char c, int word)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	k = 0;
// 	while (s[i] && k < word)
// 	{
// 		j = 0;
// 		if (s[i] && s[i] != c)
// 		{
// 			while (s[i + j] && s[i + j] != c)
// 				j++;
// 			arr[k] = ft_substr(s, i, j);
// 			if (!arr[k])
// 				return (free_arr(arr));
// 			k++;
// 			i += j;
// 		}
// 		else
// 			i++;
// 	}
// 	arr[k] = NULL;
// 	return (arr);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**arr;
// 	int		word;

// 	if (!s)
// 		return (NULL);
// 	word = wordcount((char *)s, c);
// 	arr = malloc(sizeof(char *) * (word + 1));
// 	if (!arr)
// 		return (NULL);
// 	return (getwords(arr, (char *)s, c, word));
// }

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t ft_updated_strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

static int ft_word_count(const char *s, char sep)
{
    int i;
    int word;
    
    i = 0;
    word = 0;
    while (s[i]) 
    {
        while (s[i] && s[i] != sep) 
        {
            if (s[i + 1] == sep || s[i + 1] == '\0')
                word++;
            i++;
        }
        if (s[i] == '\0')
            break;
        i++;
    }
    return (word);
}

static char *ft_get_word(const char *s, int start, int end)
{
    char *word;
    int i;

    i = 0;
    word = (char *) malloc(sizeof(char) * ((end - start + 1) + 1));
	if (!word)
		return (NULL);
    // printf("Malloc of word = %d \n", ((end - start + 1) + 1));
    while (start <= end)
        word[i++] = s[start++];
    return (word);
}

char **get_array(const char *s, char c, int i, int j)
{
    char **ptr;
    int k;
	if (!s)
		return (NULL);

    ptr = (char **) malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
    // printf("Malloc double array = %d \n", (ft_word_count(s, c) + 1));
    if (!ptr)
        return (NULL);
    k = 0;
    while (i <= ft_strlen(s))
    {
        j = i;
        while (s[i] && s[i] != c)
        {
            if (s[i + 1] == c || s[i + 1] == '\0')
                ptr[k++] = ft_get_word(s, j, i);
            i++;
        }
        if (s[i] == '\0')
            break;
        i++;
    }  
	ptr[i] = NULL; 
    return (ptr);
}

char **ft_split(const char *s, char c)
{
    char **ptr;

	if (!s)
		return (NULL);
    ptr = get_array(s, c, 0, 0);
    return (ptr);
}

// int main(void)
// {
//     const char *str = "Hello world!"; 
//     char sep = ' ';
//     char **arr = ft_split(str, sep);
//     int word_count = ft_word_count(str, sep);
//     int i = 0;

//     while (i < word_count)
//     {
//         printf("%s \n", arr[i]);
//         i++;
//     }

//     printf("Word count = %d \n", word_count);
// }