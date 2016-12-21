/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 11:45:05 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/19 08:48:00 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char **s)
{
	int		len;
	int		i;
	char	*begin;
	char	*end;
	char	tmp;

	len = ft_strlen(*s);
	i = 0;
	begin = *s;
	end = *s + (ft_strlen(*s) - 1);
	while (i < len / 2)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
		i++;
	}
}
