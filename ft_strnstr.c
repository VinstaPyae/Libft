/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:01:51 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/22 17:36:42 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>
#include <bsd/string.h> */

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while(big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && (i + j) < len)
		{
			if (little[j] != big[i +j])
				break;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Baa";
    
	char *ptr = strnstr(largestring, smallstring, sizeof(largestring));
	char *pp = ft_strnstr(largestring, smallstring, sizeof(largestring));
	printf("%s\n", ptr);
	printf("%s\n", pp);
} */