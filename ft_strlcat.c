/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:20:31 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/07 12:25:16 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (*(dst + i) && i < size)
		i++;
	while (*(src + j) && (i + j) < size)
	{
		*(dst + (i + j)) = (char)*(src + j);
		j++;
	}
	if ((i + j) < size)
		*(dst + (i + j)) = '\0';
	return (i + j);
}
