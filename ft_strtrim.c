/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:24:42 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:47:11 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*res;

	size = ft_strlen((char*)s);
	i = size - 1;
	j = 0;
	res = (void*)(0);

	while (ft_is_white_space((char)s[i]))
	{
		i--;
		size--;
	}
	if (size == 0)
		return ("");
	i = 0;
	while (ft_is_white_space((char)s[i]))
	{
		i++;
		size--;
	}
	res = (char*)(malloc(size + 1));
	if (res != (void*)(0))
	{
		j = 0;
		while (j < size)
		{
			res[j] = (char)s[(i + j)];
			j++;
		}
		res[j] = '\0';
	}
	return (res);
}
