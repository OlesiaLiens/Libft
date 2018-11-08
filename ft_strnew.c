/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:00:12 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/07 17:15:34 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char *res;

	if (size > 9223372036854775807 || size == 0)
		return (0);
	res = (unsigned char*)malloc(sizeof(unsignes char) * (size + 1));
	if (res == NULL)
		return (0);
	ft_bzero(res, size + 1);
	return ((char *)res);
}
