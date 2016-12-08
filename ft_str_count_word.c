/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_word.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 17:30:20 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:25:28 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_count_word(char const *s, char c)
{
	int		i;
	int		word;
	int		is_char;

	i = 0;
	word = 0;
	is_char = 0;
	while (s[i])
	{
		is_char = 0;
		while (s[i] == c && s[i])
		{
			i++;
		}
		while (s[i] != c && s[i])
		{
			is_char = 1;
			i++;
		}
		if (is_char)
		{
			word++;
		}
	}
	return (word);
}
