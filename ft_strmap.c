/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 09:55:10 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:29:28 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*res;

	i = 0;
	res = (void*)(0);
	while (s[i])
	{
		i++;
	}
	res = (char*)(malloc(sizeof(char) * (i + 1)));
	i = 0;
	while (s[i])
	{
		*(res + i) = f(s[i]);
		i++;
	}
	*(res + i) = '\0';
	return (res);
}
