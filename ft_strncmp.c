/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jace <jace@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:46:52 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/25 02:42:49 by jace             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (r);
}

/* int	main(void)
{
	printf("%d \n", strncmp("fdsdfaaggr","fdzsfaaggr",3));
        printf("%d \n", ft_strncmp("fdsdfaaggr","fdzsfaaggr",3));
} */