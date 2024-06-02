#include "libft.h"

int	ft_wlen(int n)
{
	int	nb;
	int	len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb /= 10)
		len++;
	return (len);
}

char	*ft_testitoa(int n)
{
	int	len;
	int	nb;
	char	*str;

	nb = n;
	len = ft_wlen(n);
	str = (char *) malloc ((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[len + 1] = '\0';
	if (nb < 0)
		nb *= -1;
	while (len >= 0)
	{
		if (n < 0 && len == 0)
			str[len] = '-';
		else
			str[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

/* int main(void)
{
	int n = 247;
	char *s = ft_testitoa(n);
	printf("%s \n", s);
}
 */