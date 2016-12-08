/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 08:54:44 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/05 10:09:40 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{

	t_list	*current;

	current = *alst;
	while (current->next != (void*)(0))
	{
		del(current, sizeof(current->content_size));
		free(&current);
	}
}

