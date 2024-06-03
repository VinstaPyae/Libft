/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:21:33 by pzaw              #+#    #+#             */
/*   Updated: 2024/06/03 16:09:13 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_itoa(int n)
{
	int	len;
	long	nb;
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
        int n = -2147483648;
        char *s = ft_itoa(n);
        printf("%s \n", s);
} */