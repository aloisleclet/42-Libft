/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:13:55 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/18 08:27:00 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_createtab(size_t *size, char ***array)
{
	if (!(*array = (char **)malloc(sizeof(char *) * (*size + 1))))
		return (0);
	return (1);
}

static size_t	ft_filltab(char **str, char *c, char ***array)
{
	size_t	size;

	size = 0;
	while (**str == *c && **str)
		*str += 1;
	while (**str != *c && **str)
	{
		*str += 1;
		size += 1;
	}
	if (!(**array = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	*str -= size;
	while (**str != *c && **str)
	{
		***array = **str;
		**array += 1;
		*str += 1;
	}
	***array = '\0';
	**array -= size;
	return (1);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t		size;
	char		**array;
	char		*str;
	size_t		i;

	if (!s)
		return (NULL);
	str = (char *)s;
	size = ft_strcountword(s, c);
	if (!(ft_createtab(&size, &array)))
		return (NULL);
	str = (char *)s;
	i = size;
	while (i--)
	{
		if (!(ft_filltab(&str, &c, &array)))
			return ((void*)(0));
		array++;
	}
	*array = (void*)(0);
	array -= size;
	return (array);
}
