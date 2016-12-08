/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:33:09 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:33:03 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	res = (char*)(malloc(sizeof(char) * (len + 1)));
	i = start;
	j = 0;
	if (res != (void*)(0))
	{
		while (s[j] && i < (start + len))
		{
			res[j++] = s[i++];
		}
	}
	return (res);
}
