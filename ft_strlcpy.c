/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:07:32 by pzaw              #+#    #+#             */
/*   Updated: 2024/06/03 17:40:50 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = ft_strlen(src);
    if (src_len + 1 < size)
        ft_memcpy(dest, src, src_len + 1);
    else
    {
        while (i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (src_len);
}

/* int main(void)
{
        const char *s;
        char d[8];
        size_t i;
        char *src = "abcd";
        char des[8];
        size_t j = 8;

        strlcpy(des, src, j);
        printf("%s \n", des);

        s = "abcd";
        i = 9;
        ft_strlcpy(d, s, i);
        printf("%s \n", d);
} */