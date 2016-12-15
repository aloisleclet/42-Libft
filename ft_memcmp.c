/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 09:35:22 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 14:24:36 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	i = 1;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (!n)
		return (0);
	while (i < n && *str1 == *str2)
	{
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}
