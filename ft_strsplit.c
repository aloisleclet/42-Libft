/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:13:55 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/13 17:24:13 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_split(char *s, char c, char **res)
{
	int		nb_word;
	int		nb_char;

	nb_word = 0;
	nb_char = 0;
	res = (char**)(malloc(sizeof(char*) * ft_str_count_word(s, c)));
	if (res == (void*)(0))
		return ((void*)(0));
	while (*s)
	{
		nb_char = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			nb_char++;
		}
		if (nb_char)
		{
			res[nb_word] = (char*)(malloc(nb_char + 1));
			if (res[nb_word] == (void*)(0))
				return ((void*)(0));
			nb_word++;
		}
	}
	return (res);
}

static char	**fill_split(char *s, char c, char **res)
{
	int		nb_word;
	int		nb_char;

	nb_word = 0;
	nb_char = 0;
	while (*s)
	{
		nb_char = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			res[nb_word][nb_char] = *s;
			s++;
			nb_char++;
		}
		if (nb_char)
		{
			res[nb_word][nb_char] = '\0';
			nb_word++;
		}
	}
	return (res);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**res;

	res = (void*)(0);
	res = alloc_split((char*)s, c, res);
	res = fill_split((char*)s, c, res);
	return (res);
}
