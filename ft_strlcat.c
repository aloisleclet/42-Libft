/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:20:31 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:34:03 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;

	size_dst = ft_strlen(dst);
	if (size > size_dst)
	{
		ft_strncpy(&dst[size_dst], src, (size - size_dst));
		if (&dst[size - 1])
			dst[size - 1] = '\0';
	}
	else
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + size_dst);
}
