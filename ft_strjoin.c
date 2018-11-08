/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:35:13 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/08 13:08:49 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	size_t		len;
	size_t		i1;
	size_t		i2;

	i1 = 0;
	i2 = 0;
	if ((s1 && *s1) && (s2 && *s2))
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		res = (char*)malloc(sizeof(char) * (len + 1));
		if (res == 0)
			return (NULL);
		while (*s1)
		{
			res[i1] = s1[i1];
			i1++;
		}
		while (*s2)
			res[i1++] = s2[i2++];
		res[i1] = '\0';
		return (res);
	}
	return (0);
}

int		main(void)
{
	char s1[] = "Olesia";
	char s2[] = "Masha";	

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
