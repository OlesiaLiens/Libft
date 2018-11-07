/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:53:40 by oshyiata          #+#    #+#             */
/*   Updated: 2018/10/30 15:42:04 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int ch)
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
