/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:22:00 by pzaw              #+#    #+#             */
/*   Updated: 2024/06/03 20:18:24 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_slen(char const *s)
{
        int     i;
        int     c;

        i = 0;
        while (s[i])
        {
                c = 0;
                if (s[i] == c)
                {
                        c++;
                }
                i++;
        }
        return (c);
}

char	**ft_split(char const *s, char c)
{
        char	**ptr;
        size_t	i;
        size_t	j;
        size_t	k;

        if (!s)
                return (NULL);
        ptr = (char **)malloc((ft_slen(s) + 2) * sizeof(char *));
        if (ptr == NULL)
                return (NULL);
        i = 0;
        j = 0;
        while (s[i] != '\0')
        {
                if (s[i] != c)
                {
                        k = 0;
                        ptr[j] = (char *)malloc(ft_strlen(s) + 1);
                        if (ptr[j] == NULL)
                                return (NULL);
                        while (s[i] != c && s[i] != '\0')
                                ptr[j][k++] = s[i++];
                        ptr[j++][k] = '\0';
                }
                else
                        i++;
        }
        ptr[j] = NULL;
        return (ptr);
}

int main(void)
{
        char s[] = "My name is Papa Mila";
        char **r = ft_split(s, ' ');
        int i = 0;
        while (r[i] != NULL)
        {
                printf("%s \n", r[i]);
                i++;
        }
}