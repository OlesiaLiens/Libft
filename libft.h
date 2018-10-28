/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 20:02:15 by oshyiata          #+#    #+#             */
/*   Updated: 2018/10/28 20:20:14 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c,  size_t n);
void	*ft_bzero(void *destination, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *arr1, const void *arr2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *destination, int c, size_t n);
void	*ft_memmove (void *dest, const void *src, size_t n);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strncpy(char *s1, const char *s2, size_t n);

#endif
