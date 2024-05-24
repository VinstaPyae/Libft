/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:07:32 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/22 19:36:20 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
        const char *s;
        char d[5];
        size_t i;

        s = "abcd";
        i = 3;
        strlcpy(d, s, i);
        printf("%s \n", d);
}