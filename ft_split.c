#include <stdio.h>
#include <stdlib.h>

static int ft_strlen(const char *s)
{
    int len;

    len = 0;
    while (s[len])
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
    // printf("Malloc of word = %d \n", ((end - start + 1) + 1));
    while (start <= end)
        word[i++] = s[start++];
    return (word);
}

char **get_array(const char *s, char c, int i, int j, int len)
{
    char **ptr;
    int k;

    ptr = (char **) malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
    // printf("Malloc double array = %d \n", (ft_word_count(s, c) + 1));
    if (!ptr || len == 0 || s == NULL)
        return (NULL);
    k = 0;
    while (i <= len)
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
    return (ptr);
}

char **ft_split(const char *s, char c)
{
    char **ptr;
    int len;

    len = ft_strlen(s);
    ptr = get_array(s, c, 0, 0, len);
    return (ptr);
}

// int main(void)
// {
//     const char *str = "Hello world, I am computer."; 
//     char sep = ' ';
//     int word_count = ft_word_count(str, sep);
//     char **arr = ft_split(str, sep);
//     int i = 0;

//     while (i < word_count)
//     {
//         printf("%s \n", arr[i]);
//         i++;
//     }

//     printf("Word count = %d \n", word_count);
// }