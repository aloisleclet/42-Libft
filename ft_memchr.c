/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:02:23 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/06 10:07:36 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	c = (unsigned char)(c);
	str = (unsigned char*)(s);
	i = 0;
	while (i < n && *(str + i) != c)
		i++;
	return ((*(str + i) == c) ? (void *)(str + i) : (void*)(0));
}
