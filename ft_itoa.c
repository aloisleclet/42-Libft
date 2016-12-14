/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:04:48 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:14:43 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_alloc_itoa(int i)
{
	char	*res;
	int		j;
	int		is_negative;

	res = (void*)(0);
	j = 0;
	is_negative = (i < 0);
	while (ft_pow(10, j) < i)
	{
		j++;
		ft_pow(10, j);
	}
	if (j == 0)
		j++;
	res = (char*)(malloc(sizeof(char) * j + 1 + is_negative));
	if (!res)
		res = (void*)(0);
	return (res);
}

char			*ft_itoa(int i)
{
	char	*res;
	int		d;
	int		j;
	int		is_negative;

	res = ft_alloc_itoa(i);
	j = 0;
	is_negative = 0;
	if (i == 0 || i == -0)
		return ("0");
	if (i < 0)
	{
		is_negative = 1;
		i *= -1;
	}
	while (i != 0)
	{
		d = i % 10;
		*(res + j) = (d > 9) ? (d - 10) + 'a' : d + '0';
		i = i / 10;
		j++;
	}
	if (is_negative)
		*(res + j) = '-';
	j++;
	*(res + j) = '\0';
	return (ft_strrev(res));
}
