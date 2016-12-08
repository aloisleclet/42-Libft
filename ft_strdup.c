/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 08:17:41 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/06 17:11:04 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	int		i;

	s_dup = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (s_dup != (void*)(0))
	{
		i = 0;
		while (s[i])
		{
			s_dup[i] = s[i];
			i++;
		}
		s_dup[i] = '\0';
	}
	return (s_dup);
}
