#include <unistd.h>
/* #include <stdio.h>
#include <string.h> */

char	*ft_strchr(const char *s, int c)
{
        int     i;

        i = 0;
        while (s[i] != '\0')
        {
                if (s[i] == c)
                {
                        return ((char *)&s[i]);
                }
                i++;
        }
        return (NULL);
}

/* int	main(void)
{
	printf("%s \n", strchr("fdsaffdggra",'a'));
	printf("%s \n", ft_strchr("fdsaffdggra",'a'));
} */