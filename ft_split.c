#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int ft_word_count(const char *s, char sep)
{
    int i;
    int word;
    
    i = 0;
    word = 0;
    while (s[i]) 
    {
        if (s[i] != sep && (s[i + 1] == sep || s[i + 1] == '\0'))
			word++;
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
	word[i] = '\0';
    return (word);
}

char **get_array(const char *s, char c, int i, int j)
{
    char **ptr;
    int k;

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
	ptr[k] = NULL; 
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
//     const char *str = "  Hello world!    lollipop!  "; 
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