/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:00:47 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/07 19:35:57 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	ind;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ind = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (ss1[ind] == ss2[ind] && ss1[ind] != '\0' && ss2[ind] != '\0' && n--)
		ind++;
	return (ss1[ind] - ss2[ind]);
}
