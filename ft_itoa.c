/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:04:48 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 14:33:36 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int i)
{
	char	*res;
	int		is_negative;
	int		j;
	int		k;

	if (i == -2147483648)
		return (ft_strdup("-2147483648"));
	j = 0;
	is_negative = (i < 0) ? 1 : 0;
	i = (i < 0) ? i * (-1) : i;
	k = i;
	while (k /= 10)
		j++;
	if (!(res = ft_strnew(j + is_negative + (k == 0))))
		return ((void*)(0));
	j = 0;
	while (i != 0)
	{
		*(res + (k++)) = (char)((i % 10) + 48);
		i /= 10;
	}
	if (is_negative == 1)
		*(res + k) = '-';
	return (k == 0 ? "0" : ft_strrev(res));
}
