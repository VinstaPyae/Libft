/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:21:12 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/30 14:21:14 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
     /* size_t	i;
     unsigned char	*ptr;

     i = 0;
     ptr = (unsigned char *) s;
     while (i < n)
     {
	ptr[i] = 0;
	i++;
     } */
     ft_memset(s, 0, n);
}

/* int	main()
{
	char buffer[10] = "1";
	int i = 0;
	while (i < sizeof(buffer))
	{
		printf("%s ",buffer);
		i++;
	}
	printf("\n");
	printf("\n");
	ft_bzero(buffer, sizeof(buffer));
	int j = 0;
	while (j < sizeof(buffer))
	{
		printf("%s ",buffer);
		j++;
	}
} */