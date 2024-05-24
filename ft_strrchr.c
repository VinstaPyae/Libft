/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:48:24 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/21 17:36:55 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>
#include <string.h> */

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	int		i;

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