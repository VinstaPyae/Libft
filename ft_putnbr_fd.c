#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *s;
	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}

/* int main(void)
{
	int n = -2147483648;
	ft_putnbr_fd(n, 1);
}
 */