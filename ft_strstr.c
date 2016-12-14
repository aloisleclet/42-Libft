/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 07:41:00 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:38:53 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	size;
	char	*little_begin;

	i = 0;
	size = ft_strlen(little);
	little_begin = (char*)little;
	if (ft_strlen(big) < ft_strlen(little))
		return ((void*)(0));
	else if ((ft_strlen(little) == 0) || (ft_strcmp(big, little) == 0))
		return (char*)big;
	while (*big++)
	{
		while (*big == *little && *big && *little)
		{
			big++;
			little++;
			i++;
		}
		if (i == size)
			return (char*)(big - size);
		else
		{
			little = little_begin;
			i = 0;
		}
	}
	return ((void*)(0));
}
