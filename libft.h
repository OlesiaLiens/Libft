/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 20:02:15 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/07 14:50:15 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void    *ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *destination, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *arr, int c, size_t n);
int     ft_memcmp(const void *arr1, const void *arr2, size_t n);
int     ft_strlen(char *str);
char    *ft_strdup(char *src);
char    *ft_strcpy(char *s1, const char *s2);
char    *ft_strncpy(char *s1, const char *s2, size_t n);
char    *ft_strcat(char *dest, const char *app);
char    *ft_strncat(char *dest, const char *app, size_t n);
char    ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strchr(const char *str, int ch);
char    *ft_strrchr(const char *str, int ch);
char    *ft_strstr(const char *haystack, const char *needle);
char    *ft_strnstr(const char *s, const char *n, size_t len);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);

#endif
