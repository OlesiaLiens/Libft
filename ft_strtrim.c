/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:36:21 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/10 15:59:17 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (s && *s)
	{
		len = ft_strlen(s) - 1;
		while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			i++;
		if (s[i] == '\0')
			return ("\0");
		while (len > 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
			len--;
		res = (char *)malloc(sizeof(char) * (len - i + 2));
		if (res == NULL)
			return (NULL);
		res[len - i + 1] = '\0';
		ft_strncpy(res, &s[i], (len - i + 1));
		return (res);
	}
	return (NULL);
}
