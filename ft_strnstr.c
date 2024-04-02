#include <string.h>
#include <stdio.h>

static int calculate_len(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static int check_needle(const char *haystack, const char *needle, int index)
{
	int j;

	j = 0;
	while (needle[j] != '\0')
            {
                if (needle[j] == haystack[index])
				{
                    j++;
                    index++;
				}
				else
					break;
            }
	return (j);
}

char *ft_strnstr(const char *haystack, const char *needle, unsigned long len)
{
    int	i;
	int needle_len;

    i = 0;
	needle_len = calculate_len(needle);
	if (needle_len == 0)
		return ((char *)haystack);
    while (i < len && haystack[i] != '\0')
    {
        if (needle[0] == haystack[i])
        {
			if (needle_len == check_needle(haystack, needle, i))
				if (len >= (i + needle_len))
					return ((char *)haystack + i);
        }
        i++;
    }
	return (0);
}

// i = 11; len = 16; needle_len = 5; if (16 >= 11 + 5)

int main(void)
{
    char *haystack = "Hello worl world, what's up?";
    char *needle = "world";
    char *ptr = strnstr(haystack, needle, 16);
	char *ptr2 = ft_strnstr(haystack, needle, 16);
    printf("result original = %s\n", ptr);
	printf("result FT = %s\n", ptr2);
}