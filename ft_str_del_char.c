/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_del_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:15:05 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:25:49 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_del_char(char *s, int c)
{
	int		i;
	char	*res;

	res = (void*)(0);
	i = 0;
	while (s[i])
	{
		i++;
	}
	res = (char*)(malloc(sizeof(char) * i));
	i = c;
	while (s[i + 1])
	{
		s[i] = s[i + 1];
		i++;
	}
	s[i] = '\0';
	return (res);
}
