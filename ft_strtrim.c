/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:24:42 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/05 08:01:04 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		size;
	char	*res;

	i = 0;
	j = 0;
	size = ft_strlen(s) - 1;
	res = (void*)(0);
	while (ft_is_white_space(s[i]))
		i++;
	while (ft_is_white_space(s[size]))
		size--;
	res = (char*)(malloc(sizeof(char) * (size - i + 1)));
	if (res != (void*)(0))
	{
		size++;
		while (i < size)
		{
			res[j++] = s[i++];
		}
		res[j] = '\0';
	}
	return (res);
}
