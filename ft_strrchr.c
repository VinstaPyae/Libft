#include <unistd.h>
/* #include <stdio.h>
#include <string.h> */

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	int     i;
	
	i = 0;
	r = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			r = (char *)&s[i];
		}
		i++;
	}
	return (r);
}

/* int	main(void)
{
	printf("%s \n", strrchr("fdasffdggr",'a'));
	printf("%s \n", ft_strrchr("fdasffdggr",'a'));
} */