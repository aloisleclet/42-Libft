/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:07:49 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 14:52:26 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	char	*p;

	if (as)
	{
		p = *as;
		while (*p)
		{
			free(p);
			p++;
		}
		*as = (void*)(0);
	}
}
