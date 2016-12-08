/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 07:57:18 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:22:01 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	const void	*source;
	void		*destination;

	i = 0;
	source = src;
	destination = dest;
	while (i < len)
	{
		*((char*)destination + i) = *((char*)source + (i));
		i++;
	}
	dest = destination;
	return (dest);
}
