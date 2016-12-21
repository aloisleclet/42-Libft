/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:54:14 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 14:41:13 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (ft_strlen(little) == 0)
		return (char *)(big);
	while (big[i])
	{
		j = i;
		k = 0;
		while (big[j] == little[k] && j < len)
		{
			j++;
			k++;
			if (little[k] == '\0')
				return (char *)(big + i);
		}
		i++;
	}
	return ((void*)(0));
}
