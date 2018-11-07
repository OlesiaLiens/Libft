/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:43:42 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/06 15:17:03 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*a;
	char	ch_1;
	int		i;

	a = (char *)str;
	i = 0;
	ch_1 = (unsigned char)ch;
	while (str[i] != '\0')
	{
		if (str[i] == ch_1)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
