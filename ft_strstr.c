/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 07:41:00 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 16:16:09 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	k;
	size_t	size;

	i = 0;
	k = 0;
	size = ft_strlen(little);
	if (ft_strlen(big) < ft_strlen(little))
		return ((void*)(0));
	else if ((ft_strlen(little) == 0) || (ft_strcmp(big, little) == 0))
		return (char*)big;
	while (big[k])
	{
		while (big[k + i] == little[i] && big[k + i] && little[i])
			i++;
		if (i == size)
			return ((char*)(big + (k)));
		else
			i = 0;
		k++;
	}
	return ((void*)(0));
}
