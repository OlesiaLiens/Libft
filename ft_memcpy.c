/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:55:07 by oshyiata          #+#    #+#             */
/*   Updated: 2018/10/27 19:53:51 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*des;
	const char	*sr = (const char*)src;

	i = 0;
	des = (char*)dest;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
