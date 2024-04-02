#ifndef LIBFT_H
#define LIBFT_H

int		        ft_isalpha(int c);
int             ft_isdigit(int c);
int		        ft_isalnum(int c);
int             ft_isascii(int c);
int		        ft_isprint(int c);
int		        ft_strlen(const char *str);
void*	        ft_memset(void *b, int c, unsigned long len);
void	        ft_bzero(void *s, unsigned long n);
void*	        ft_memcpy(void *restrict dst, const void *restrict src, unsigned long n);
void*	        ft_memmove(void *dst, const void *src, unsigned long len);
unsigned int    ft_strlcpy(char *restrict dst, const char * restrict src, unsigned int dstsize);
unsigned long   ft_strlcat(char *restrict dst, const char * restrict src, unsigned int dstsize);

int		        ft_toupper(unsigned char c);
int		        ft_tolower(unsigned char c);
char*           ft_strchr(const char *str, char c);
char*	        ft_strrchr(const char *str, char c);
int		        ft_strncmp(const char *s1, const char *s2, unsigned int i);
void*	        ft_memchr(const void *s, int c, unsigned long n);
int		        ft_memcmp(const void *s1, const void *s2, unsigned long n);
char*           ft_strnstr(const char *haystack, const char *needle, unsigned long len);
int		        ft_atoi(const char *str);

char*           ft_strdup(const char *s1);
void*           ft_calloc(size_t count, size_t size);

// PART II

char*           ft_substr(char const *s, unsigned int start, size_t len);
char*           ft_strjoin(char const *s1, char const *s2);
char*           ft_strtrim(char const *s1, char const *set);
char**          ft_split(char const *s, char c);

char*           ft_itoa(int n);

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);


#endif