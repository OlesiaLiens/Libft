/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:58:31 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/08 14:02:55 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s, int fd)
{
	size_t i;

	i = 0;
	if (s && *s)
		while (*s)
			ft_putchar_fd(s[i++], fd);
	ft_putchar_fds('\n', fd);
}
