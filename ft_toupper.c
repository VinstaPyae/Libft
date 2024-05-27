/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jace <jace@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:37:20 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/27 22:47:36 by jace             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/* int	main(void)
{
	printf("%d \n", toupper('A'));
	printf("%d \n", toupper('9'));
	printf("%d \n", ft_toupper('A'));
	printf("%d \n", ft_toupper('9'));
} */