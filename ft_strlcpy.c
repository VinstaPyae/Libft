/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jace <jace@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:07:32 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/29 02:54:07 by jace             ###   ########.fr       */
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
    {
        ft_memcpy(dest, src, src_len + 1);
    }
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
/*need to ask*/
/* int main(void)
{
        const char *s;
        char d[5];
        size_t i;

        s = "abcd";
        i = 3;
        ft_strlcpy(d, s, i);
        printf("%s \n", d);
} */