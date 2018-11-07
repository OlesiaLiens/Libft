/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 17:58:42 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/06 15:25:38 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t len)
{
	size_t len_n;
	size_t ind;
	size_t pos;

	len_n = 0;
	ind = 0;
	pos = 0;
	while (n[len_n])
		len_n++;
	if (len_n == 0 || s == n)
		return ((char *)s);
	len--;
	while (s[ind] && len)
	{
		while (n[pos] == s[ind + pos] && len)
		{
			if (pos == len_n - 1)
				return ((char *)s + ind);
			pos++;
			len--;
		}
		pos = 0;
		ind++;
	}
	return (NULL);
}
