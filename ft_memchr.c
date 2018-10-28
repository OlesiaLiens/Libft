/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:32:43 by oshyiata          #+#    #+#             */
/*   Updated: 2018/10/28 18:10:48 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const unsigned char *arr_1 = (const unsigned char*)arr;
	int					i;

	i = 0;
	if (arr && c && n > 0)
	{
		while (arr_1[i] && n)
		{
			if (arr_1[i] == c)
				return ((void*)&arr[i]);
			i++;
			n--;
		}
	}
	return (NULL);
}
