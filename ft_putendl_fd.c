#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(1, "\n", 2);
}

/* int	main(void)
{
	char *s = "Hello World";
	ft_putendl_fd(s, 1);
} */