#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

/* int main(void)
{
        char c = 'a';
        ft_putchar_fd(c, 1);
} */