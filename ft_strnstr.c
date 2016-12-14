/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:54:14 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:22:02 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = ft_strlen(little);
	if ((ft_strlen(little) == 0) || (ft_strncmp(big, little, len) == 0))
		return ((char*)big);
	else if (ft_strlen(little) > ft_strlen(big))
		return (void*)(0);
	if (ft_strlen(little) == 1)
		return (ft_strchr(big, (int)little[0]));
	while (i < len)
	{
		if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
			return ((char*)(big + i));
		i++;
	}
	return (void*)(0);
}
