/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jace <jace@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:48:24 by pzaw              #+#    #+#             */
/*   Updated: 2024/06/01 02:02:58 by jace             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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