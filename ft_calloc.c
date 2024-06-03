/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:21:24 by pzaw              #+#    #+#             */
/*   Updated: 2024/06/03 15:43:32 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}

/* int main(void)
{
    char *ptr;
    ptr = ft_calloc(6, sizeof(char));
    if (ptr == NULL)
    {
        printf("ft_calloc failed");
        return (1);
    }
    printf("%s \n", ptr);
    return (0);
} */