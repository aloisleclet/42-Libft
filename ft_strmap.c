/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 09:55:10 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 16:11:58 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*res;

	if (!s)
		return ((void*)(0));
	i = ft_strlen(s);
	res = (char*)(malloc(sizeof(char) * (i + 1)));
	if (res != (void*)(0))
	{
		i = 0;
		while (s[i])
		{
			*(res + i) = f(s[i]);
			i++;
		}
		*(res + i) = '\0';
	}
	return (res);
}
