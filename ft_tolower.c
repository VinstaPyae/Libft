#include <unistd.h>
/* #include <stdio.h>
#include <ctype.h> */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
    {
        c += 32;
    }
	return (c);
}

/* int	main(void)
{
	printf("%d \n", tolower('Z'));
	printf("%d \n", tolower('a'));
	printf("%d \n", ft_tolower('Z'));
	printf("%d \n", ft_tolower('a'));
} */