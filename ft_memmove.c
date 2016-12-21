/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 07:57:18 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/16 10:33:16 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char*)src;
	destination = (unsigned char*)dest;
	while ((int)(--len) >= 0)
	{
		if (source < destination)
			*(destination + len) = *(source + len);
		else
			*(destination++) = *(source++);
	}
	return (dest);
}
