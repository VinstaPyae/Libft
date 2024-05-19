#include <unistd.h>
/* #include <stdio.h>
#include <ctype.h> */

int	ft_isprint(int c)
{
	if (c >= 32 && c<= 126)
		return (16384);
	return (0);
}

/* int	main(void)
{
	printf("%d \n", isprint(32));
	printf("%d \n", isprint(127));
	printf("%d \n", ft_isprint(32));
	printf("%d \n", ft_isprint(127));
} */