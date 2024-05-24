/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:44:48 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/21 17:31:24 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>
#include <string.h> */

char	*ft_strchr(const char *s, int c)
{
	int	i;

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