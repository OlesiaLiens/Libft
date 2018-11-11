/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:08:25 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/10 15:30:27 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_numsize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
	}
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*res;
	int len;

	len = ft_numsize(n);
		res = (char *)malloc(sizeof(char) * (len + 1);
		if (res == NULL)
			 return (NULL);
		ft_bzero(res, ft_strlen(res) + 1);
		 if (n == 0)
			return ("0");
		if (n < 0)
		{
			if (n == -2147483648)
				 return (ft_strcpy(res, "-2147483648"));
			 n *= -1;
		 }
		while (n)
		{
		 	res[--len] = n % 10 + 48;
		 	n = n / 10;
		}
		if (res[0] == 0)
			res[0] = '-';
		return (res);
}
