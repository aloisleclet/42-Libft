/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 11:45:05 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 15:21:23 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*res;
	int		i;

	i = 0;
	res = (char*)(malloc(sizeof(char) * (ft_strlen(s) + 1)));
	while (s[i])
	{
		i++;
		res[i - 1] = *(s + (ft_strlen(s) - i));
	}
	res[i] = '\0';
	return (res);
}
