/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:04:48 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/20 16:46:43 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_check(int n, int *neg)
{
	long int	nb;

	nb = (long int)n;
	if (n < 0)
	{
		*neg = 1;
		return (-nb);
	}
	*neg = 0;
	return (nb);
}

static int		ft_sizeitoa(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int			i;
	long int	nb;
	int			neg;
	char		*res;

	nb = ft_check(n, &neg);
	i = ft_sizeitoa(nb) + neg;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return ((void*)(0));
	res[0] = (neg == 1) ? '-' : res[0];
	res[0] = (nb == 0) ? '0' : res[0];
	res[i] = '\0';
	while (nb)
	{
		res[i - 1] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	return (res);
}
