/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:22:00 by pzaw              #+#    #+#             */
/*   Updated: 2024/06/04 15:24:02 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_slen(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int	total_len;
	int	i;
	int	j;
	int	k;
	int	l;

	total_len = ft_slen(s, c);
	ptr = (char **) malloc ((total_len + 1) * sizeof(char));
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				j++;
				i++;
			}
			ptr[k] = (char *) malloc ((j + 1) * sizeof(char));
			if (!ptr[k])
				return (NULL);
			l = 0;
			while (l < j)
			{
				ptr[k][l] = s[i - j + l];
				l++;
			}
			ptr[k][l] = '\0';
			k++;
		}
		i++;
	}
	ptr[k] = NULL;
	return (ptr);
}

/* int main(void)
{
	char s[] = "My name is Papa Mila";
	char **r = ft_split(s, ' ');
	int i = 0;
	while (r[i] != NULL)
	{
		printf("%s \n", r[i]);
		i++;
	}
} */