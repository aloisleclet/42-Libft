/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 08:27:29 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 17:19:00 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	unsigned char	ch;

	destination = (unsigned char*)d;
	source = (unsigned char*)s;
	ch = (unsigned char)c;
	if (!d && !s)
		return ((void*)(0));
	while (n--)
	{
		if ((*(destination++) = *(source++)) == ch)
			return (destination);
	}
	return ((void*)(0));
}
