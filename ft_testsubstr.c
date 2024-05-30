#include "libft.h"

char	*ft_testsubstr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t i;
	size_t len_s;
	size_t	og_len;

	len_s = ft_strlen(s);
	og_len = len;
	if (!s)
		return (NULL);
	if (start > len_s)
		return (NULL);
	else if (start + len > len_s)
		og_len = len_s - start;
	ptr = (char *)malloc((og_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i] != '\0')
		ptr[i] = s[start + i];
	ptr[i] = '\0';
	return (ptr);
}

/* int	main(void)
{
	char s[] = "abcdefgh";
	char *r = ft_testsubstr(s, 8, 6);
	printf("%s \n", r);
}
 */