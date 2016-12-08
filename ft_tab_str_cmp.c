/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_str_cmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:57:50 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/01 13:33:33 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tab_str_cmp(char **tab1, char **tab2, size_t size)
{
	size_t	i;
	int		error;

	i = 0;
	error = 0;
	while (i < size)
	{
		if (strcmp(tab1[i], tab2[i]) != 0)
		{
			error++;
		}
		i++;
	}
	return (error == 0);
}
