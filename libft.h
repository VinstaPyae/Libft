/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jace <jace@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:10:23 by pzaw              #+#    #+#             */
/*   Updated: 2024/05/29 02:52:36 by jace             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);

int     ft_toupper(int c);
int     ft_tolower(int c);
int	ft_atoi(char *str);

size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);

#endif