/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:54:14 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/08 11:53:55 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*little_begin = (char*)little;
	
	i = 0;
	j = 0;
	size = ft_strlen(little);
	if (ft_strlen(big) == len && ft_strlen(little) == len)
		return ((void*)(0));
	else if ((ft_strlen(little) == 0) || (ft_strncmp(big, little, len) == 0))
		return (char*)big;
	while (i < len)
	{
		while (*big != *little && i < len)
			i++;
		while (*big == *little && i < len)
		{
			i++;
			j++;
			big++;
			little++;
			printf("i : %zu - j %zu - %c %c - len : %zu\n", i, j, *big, *little, len);
		}
		if (j == ft_strlen(little))
			return (char*)(big - size);
		else
		{
			j = 0;
			little = little_begin;
		}
	}
	return (void*)("coucou");
}
