/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:22:20 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/30 14:39:44 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char	*ptr;
        size_t	len;

        if (!s || !f)
                return (NULL);
        len = ft_strlen(s) + 1;
        ptr = (char *)malloc(len);
        if (ptr == NULL)
                return (NULL);
        ptr[len - 1] = '\0';
        while (len-- > 1)
                ptr[len - 1] = f(len - 1, s[len - 1]);
        return (ptr);
}