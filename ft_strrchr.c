/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 08:05:01 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/07 13:22:11 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	while (i > 0 && s[i] != c)
	{
		--i;
	}
	return (*(s + i) == c) ? (char*)(s + i) : (void*)(0);
}
