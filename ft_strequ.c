/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:29:19 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 15:17:31 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		res;

	i = 0;
	j = 0;
	res = 1;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	res = (i != j);
	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s2 + i) && *(s1 + i))
		i++;
	res = (res == 0 && i == j);
	return (res);
}
