/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:04:15 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/08 14:11:25 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*init_atoi(char *s)
{
	int		i;
	int		j;
	char	*s_cpy;

	i = 0;	
	j = 0;
	s_cpy = ft_strdup(s);
	while (*(s_cpy + i))
	{
		if ((*(s_cpy + i)  >= 48 && *(s_cpy + i) <= 57) || *(s_cpy + i) == '-')
		{
			*(s_cpy + j) = *(s_cpy + i); 
			j++;
		}
		i++;
		printf("i : %d\n", i);
	}
	*(s_cpy + j) = '\0';
	return ((char*)s_cpy);
}

int			ft_atoi(const char *nptr)
{
	int		power;
	int		res;
	int		is_negative;
	size_t	i;
	char	*a;

	power = 1;
	res = 0;
	is_negative = 0;
	i = 0;
	a = init_atoi((char*)nptr);
	if (*(a + 0) == '-')
	{
		is_negative = 1;
	}
	while (i++ != ft_strlen(a) - (1 + is_negative))
	{
		power *= 10;
	}
	i = is_negative;
	while (*(a + i))
	{
		res += ((int)(*(a + i) - 48)) * power;
		power /= 10;
		i++;
	}
	return (is_negative ? res * -1 : res);
}
