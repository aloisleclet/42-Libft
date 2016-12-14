/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 08:12:13 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 08:08:52 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	while (i < len)
	{
		*(dst + i) = '\0';
		i++;
	}
	return (ft_strcmp(src, "")) ? dst : (char*)src;
}
