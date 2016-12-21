/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:06:55 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 16:11:28 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return ((void*)(0));
	res = (char*)(malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))));
	if (res != (void*)(0))
	{
		while (*(s1 + j))
		{
			*(res + (i++)) = *(s1 + j);
			j++;
		}
		j = 0;
		while (*(s2 + j))
		{
			*(res + (i++)) = *(s2 + j);
			j++;
		}
		*(res + i) = '\0';
	}
	return (res);
}
