/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:02:23 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/14 09:35:34 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	c = (unsigned char)c;
	str = (unsigned char*)s;
	while (n--)
	{
		if (*str == c)
			return ((void*)str);
		str++;
	}
	return ((void*)(0));
}
