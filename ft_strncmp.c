/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 07:47:21 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/16 10:29:04 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)(s1 - 1);
	str2 = (unsigned char*)(s2 - 1);
	while ((--n) + 1 && *(++str1) == *(++str2) && *str1 && *str2)
		;
	return (*(str1) - *(str2));
}
