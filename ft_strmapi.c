/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:08:14 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:29:40 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		*(res + i) = f(i, s[i]);
		i++;
	}
	return (res);
}
