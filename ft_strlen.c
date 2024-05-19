#include <unistd.h>
/* #include <stdio.h>
#include <string.h> */

size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	const char	*s;
	s = "fdsafdsaffag322";
	size_t r = strlen(s);
	printf("%zu \n", r);
	printf("%zu \n", ft_strlen(s));
} */