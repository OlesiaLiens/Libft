/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 21:10:19 by oshyiata          #+#    #+#             */
/*   Updated: 2018/10/27 21:27:15 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c,  size_t n)
{
	size_t		i;
	char		*des;
	const char	*sr = (const char*)src;

	i = 0;
	des = (char*)dest;
	while (i < n && sr[i] != c )
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
