/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:04:15 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 14:30:22 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	od(char *s)
{
	if (*s == '-')
		s++;
	while (*s)
	{
		if (!ft_isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

int			ft_atoi(const char *nptr)
{
	int		res;
	int		is_negative;
	char	*a;

	res = 0;
	is_negative = 0;
	a = (char*)nptr;
	while (!ft_isdigit(*a) && *a != '-')
		a++;
	if (*a == '-')
	{
		a++;
		is_negative = 1;
	}
	while (*a && ft_isdigit(*a))
	{
		res = res * 10 + ((int)(*a - 48));
		a++;
	}
	if (ft_strlen((char*)nptr) > 19 && nptr[0] == '-' && od((char*)(nptr)))
		return (0);
	else if (ft_strlen((char*)nptr) > 19 && od((char*)(nptr)))
		return (-1);
	return (is_negative ? res * -1 : res);
}
