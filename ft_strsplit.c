/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:13:55 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 14:36:20 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;
	int		nb_char;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	nb_char = 0;
	str = (char*)s;
	res = (char**)(malloc(sizeof(char*) * ft_strcountword((char*)str, c)));
	while (i < ft_strcountword(str, c))
	{
		while (*(str + j) == c && *(str + j))
			j++;
		while (*(str + j) != c && *(str + j))
		{
			nb_char++;
			j++;
		}
		res[i] = (char*)(malloc(sizeof(char) * nb_char));
		j -= nb_char;
		while (k < nb_char)
		{
			res[i][k] = s[j];
			k++;
			j++;
		}
		i++;
		k = 0;
		nb_char = 0;
	}
	res[i] = (void*)(0);
	return (res);
}

