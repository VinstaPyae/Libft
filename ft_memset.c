/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jace <jace@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:02:08 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/29 01:23:11 by jace             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
        size_t     i;
        unsigned char    *ptr;

        i = 0;
        ptr = (unsigned char *) s;
        while (i < n)
        {
                ptr[i] = c;
                i++;
        }
        return (s);
}

/* int main(void)
{
        char *buff[5];
        char *buff_1[5];

        memset(buff, 'A', sizeof(buff));
        printf("%s \n", buff);
        ft_memset(buff_1, 'A', sizeof(buff_1));
        printf("%s \n", buff_1);
} */