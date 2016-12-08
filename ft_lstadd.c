/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 10:41:04 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/03 14:02:02 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*current;

	current = *alst;
//	printf("add :%s\n", current->content);
	while (current->next != (void*)(0))
	{
		current = current->next;
//		printf("add :%s\n", current->content);
	}
	current->next = new;
}
