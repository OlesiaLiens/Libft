/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:01:12 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/08 12:33:35 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (s && *s)
	{
		res = (char*)malloc(sizeof(char) * (len + 1));
		if (res == NULL)
			return (0);
		ft_strncmp(res, &s[start], len);
		res[len] = '\0';
		return (res);
	}
	return (0);
}

int		main(void)
{	
	unsigned int start;
	size_t len;
	char s[] = "Olesia";


	start = 2;
	len = 6;
	printf("%s", ft_strsub(s, start, len));
	return (0);
}
