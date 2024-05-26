/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jace <jace@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:43:04 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/25 02:40:33 by jace             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

/* int    main(void)
 {
	int c;
	c = 'A';
	int r = isdigit(c);
	printf("%d \n", r);
	int z = ft_isdigit(c);
	printf("%d \n", z);
 } */