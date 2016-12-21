/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:24:42 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/20 15:13:04 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char *str)
{
	int		len;

	len = 0;
	while (ft_isspace(*str))
		str++;
	while (*(str))
	{
		len++;
		str++;
	}
	if (len)
		str--;
	while (ft_isspace(*str))
	{
		len--;
		str--;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		tmp;
	char	*res;

	if (!s)
		return ((void*)(0));
	str = (char *)s;
	len = ft_size(str);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return ((void*)(0));
	while (ft_isspace(*str))
		str++;
	tmp = len;
	while (len--)
		*(res++) = *(str++);
	*res = '\0';
	return (res - tmp);
}
