/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:33:09 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 15:21:06 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = start;
	j = 0;
	if (!s)
		return ((void*)(0));

	res = (char*)(malloc(sizeof(char) * (len + 1)));
	if (res != (void*)(0))
	{
		while (s[j] && i < (start + len))
		{
			res[j++] = s[i++];
		}
		res[j] = '\0';
	}
	return (res);
}
