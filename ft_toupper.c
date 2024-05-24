/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:37:20 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/21 17:38:26 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>
#include <ctype.h> */

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