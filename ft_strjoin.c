/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:22:10 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/30 14:22:11 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
        char	*ptr;
        size_t	len;

        if (!s1 || !s2)
                return (NULL);
        len = ft_strlen(s1) + ft_strlen(s2) + 1;
        ptr = (char *)malloc(len);
        if (ptr == NULL)
                return (NULL);
        ft_memcpy(ptr, s1, ft_strlen(s1));
        ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
        return (ptr);
}