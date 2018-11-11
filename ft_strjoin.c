/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:35:13 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/10 14:12:39 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*res;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if ((s1 && *s1) && (s2 && *s2))
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		res = (char *)malloc(sizeof(char) * (len + 1));
		if (res == NULL)
			return (NULL);
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
		while (s2[i2])
			res[i++] = s2[i2++];
		return (res);
	}
	return (NULL);
}
