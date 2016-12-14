/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 07:47:21 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:20:24 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	res = (ft_strlen(s1) == 0) ? -1 : 1;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
	{
		i++;
		res = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (ft_strlen(s1) == 0 && ft_strlen(s2) == 0) ? 0 : (res);
}
