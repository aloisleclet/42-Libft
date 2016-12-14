/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:04:15 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:12:23 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *nptr)
{
	int		res;
	int		is_negative;
	char	*a;

	res = 0;
	is_negative = 0;
	a = (char*)nptr;
	while (!ft_isdigit(*a) && *a != '-')
	{
		a++;
	}
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
	return (is_negative ? res * -1 : res);
}
