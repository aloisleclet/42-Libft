/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 08:27:29 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/06 15:17:31 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char		*destination;
	unsigned char		*source;
	unsigned char		ch;
	size_t 	i;

	i = 0;
	destination = (unsigned char*)d;
	source = (unsigned char*)s;
	ch = (unsigned char)c;

	while (i < n && *(source + i) != c)
	{
		*(destination + i) = *(source + i);
		i++;
	}
	return ((*(source + i) == c) ? (void*)((source + i)) : (void*)(0)); 
}

//void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
//{
//	size_t				i;
//	size_t				j;
//	unsigned char		*destination;
//	const unsigned char	*source;
//	void				*res;
//
//	i = 0;
//	j = 0;
//	c = (unsigned char)c;
//	res = (void*)("");
//	destination = (unsigned char*)d;
//	source = (unsigned char*)s;
//	if (ft_strlen((char*)source) > 0)
//	{
//		while (*(source + i) != c && i < n)
//		{
//			*(destination + j) = *(source + i);
//			i++;
//			j++;
//		}
//		*(destination + j) = *(source + i);
//		//res = (void*)(s + i + 1);
//		res = (void*)(""); //diffs works but not consistant with the man
//		d = ((*(source + i) == c) ? (destination + j) : (void*)(0));
//	}
//	return ((*(source + i) == c) ? res : (void*)(0));
//}
