/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:04:48 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:19:57 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_itoa	ft_init_res(t_itoa vars)
{
	while (vars.k < vars.i)
	{
		vars.j++;
		vars.k = ft_pow(10, vars.j);
	}
	vars.res = (char*)(malloc(sizeof(char) * vars.j + 1 + (vars.i < 0)));
	return (vars);
}

static char		*ft_itoa_process(t_itoa vars)
{
	vars.res[0] = vars.is_negative ? '-' : 0;
	vars.j--;
	vars.k = 0;
	while (vars.j > -1)
	{
		vars.k = vars.i / ft_pow(10, vars.j);
		while (vars.k > 10)
			vars.k %= 10;
		vars.res[vars.l] = vars.k + 48;
		vars.l++;
		vars.j--;
	}
	vars.res[vars.l] = '\0';
	return (vars.res);
}

char			*ft_itoa(int i)
{
	t_itoa	vars;
	char	*res;

	vars.j = 0;
	vars.k = 0;
	vars.l = (i < 0);
	vars.is_negative = (i < 0);
	vars.res = (void*)(0);
	vars.i = (i < 0) ? i * (-1) : i;
	vars = ft_init_res(vars);
	res = ft_itoa_process(vars);
	return (res);
}
