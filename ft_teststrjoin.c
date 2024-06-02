#include "libft.h"

char	*ft_teststrjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;
	size_t	len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	len = s1_len + s2_len;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		str[i] = s1[i];
	j = -1;
	while (++j < s2_len)
		str[i+j] = s2[j];
	str[i+j] = '\0';
	return (str);
}

/* int	main(void)
{
	char s1[] = "";
	char s2[] = "";
	char *s = ft_teststrjoin(s1, s2);
	printf("%s \n", s);
}
 */