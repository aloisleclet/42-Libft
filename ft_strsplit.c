/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:13:55 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:32:02 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_gen_res(t_split vars)
{
	vars.i = 0;
	vars.j = 0;
	vars.word = 0;
	while (vars.word < vars.n)
	{
		vars.j = 0;
		while (vars.s[vars.i] == vars.c && vars.s[vars.i])
			vars.i++;
		while (vars.s[vars.i] != vars.c && vars.s[vars.i])
		{
			vars.res[vars.word][vars.j] = vars.s[vars.i];
			vars.j++;
			vars.i++;
		}
		vars.res[vars.word][vars.j] = '\0';
		vars.word++;
		vars.i++;
	}
	return (vars.res);
}

char		**ft_strsplit(char const *s, char c)
{
	t_split vars;

	vars.s = s;
	vars.i = 0;
	vars.j = 0;
	vars.c = c;
	vars.word = ft_str_count_word(vars.s, vars.c);
	vars.res = (char**)(malloc(sizeof(char*) * vars.word));
	vars.n = vars.word;
	vars.word = 0;
	while (vars.s[vars.i])
	{
		vars.j = 0;
		while (vars.s[vars.i] == vars.c && vars.s[vars.i])
			vars.i++;
		while (vars.s[vars.i] != vars.c && vars.s[vars.i])
		{
			vars.j++;
			vars.i++;
		}
		vars.res[vars.word] = (char*)(malloc(sizeof(char) * (vars.j + 1)));
		vars.word++;
	}
	return (ft_gen_res(vars));
}
