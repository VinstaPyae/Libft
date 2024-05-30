/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:22:30 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/30 14:22:31 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
        char	*ptr;
        size_t	len;
        size_t	i;
        size_t	j;

        if (!s1 || !set)
                return (NULL);
        i = 0;
        while (s1[i] && ft_strchr(set, s1[i]))
                i++;
        j = ft_strlen(s1);
        while (j > i && ft_strchr(set, s1[j - 1]))
                j--;
        len = j - i + 1;
        ptr = (char *)malloc(len);
        if (ptr == NULL)
                return (NULL);
        ft_memcpy(ptr, s1 + i, len - 1);
        ptr[len - 1] = '\0';
        return (ptr);
}