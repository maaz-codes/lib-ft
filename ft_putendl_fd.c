#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

// int main(void)
// {
//     char *s = "Hello world!";
//     int fd = 1;
//     ft_putendl_fd(s, fd);
// }