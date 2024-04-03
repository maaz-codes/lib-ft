#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

// int main(void)
// {
//     char *s = "Hello world!";
//     int fd = 1;
//     ft_putstr_fd(s, fd);
// }