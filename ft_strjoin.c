/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:06:55 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:32:23 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = (void*)(0);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	res = (char*)(malloc(sizeof(char) * (i + j + 1)));
	i = -1;
	j = 0;
	while (s1[++i] && res != (void*)(0))
	{
		res[i] = s1[i];
	}
	while (s2[j] && res != (void*)(0))
	{
		res[i] = s2[j++];
		i++;
	}
	res[i] = '\0';
	return (res);
}
