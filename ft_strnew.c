/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:53:41 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 16:12:14 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!(res = (char*)malloc(size + 1)))
		return ((void*)(0));
	while (i <= size + 1)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
