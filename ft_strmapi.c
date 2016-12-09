/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:08:14 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/09 11:21:01 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	int			size;
	char		*res;

	i = 0;
	size = ft_strlen(s) + 1;
	res = (char*)(malloc(sizeof(char) * size));
	if (res != (void*)(0))
	{
		while (i <= size)
		{
			res = f(i, (char)s[i]);
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
