/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:13:55 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/09 17:58:51 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**init_split(char *s, char c, int nb_word, char **res)
{
	int		is_word;
	int		nb_char;
	char	**result;
	is_word = 0;
	nb_char = 0;
	if (nb_word != -1)
		result = (char**)(malloc(sizeof(char*) * nb_word));
	else
		nb_word = 0;

	while (*s)
	{
		nb_char = 0;
		while (*s == c && *s)
		{
			is_word = 0;
			s++;
		}
		while (*s != c && *s)
		{
			is_word = 1;
			s++;
			nb_char++;
		}
		if (is_word)
		{
			if (nb_word != -1)
			{
				printf("%d\n", nb_word);
				result[nb_word] = (char*)(malloc(sizeof(char) * nb_char));
			}	
			nb_word++;
		}
	}
	printf("nb_word : %d\n", nb_word);
	return (result == (void*)(0)) ? init_split(s, c, nb_word, res) : result;
}

char		**ft_strsplit(const char *s, char c)
{
	char	**res;
	int		nb_word;

	res = (void*)(0);
	nb_word = -1;
	res = (void*)(0);
	init_split((char*)s, c, nb_word, res);
	return (0);
}
