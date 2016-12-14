/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 08:27:29 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:33:34 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	unsigned char	ch;
	size_t			i;

	i = 0;
	destination = (unsigned char*)d;
	source = (unsigned char*)s;
	ch = (unsigned char)c;
	if (d == s || n == 0)
		return (d);
	while (i < n)
	{
		*(destination + i) = *(source + i);
		if (*(source + i) == ch)
			return ("");
			//return (source + i + 1);
		i++;
	}
	return ((void*)(0));
}
