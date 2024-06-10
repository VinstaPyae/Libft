/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:22:00 by pzaw              #+#    #+#             */
/*   Updated: 2024/06/10 21:42:53 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !i)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}

static char	*ft_duplicate(const char *s, size_t len)
{
	char	*ptr;

	ptr = (char *) malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (len--)
		ptr[len] = s[len];
	return (ptr);
}

static char	**ft_wordsplit(char **ptr, char const *s, char c)
{
	char	*start;
	int		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			ptr[i] = ft_duplicate(start, s - start);
			if (!ptr[i])
			{
				while (i > 0)
					free(ptr[--i]);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = (char **) malloc((ft_wcount(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (!(ft_wordsplit(ptr, s, c)))
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

/* int main(void)
{
	char *s = "Hello My World!";
	char **ptr = ft_split(s, ' ');
	int i = 0;
	while(ptr[i] != NULL)
	{
		printf("%s \n", ptr[i]);
		i++;
	}
} */