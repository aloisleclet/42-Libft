/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:48:25 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 15:21:19 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;
	t_list		*res;

	if (!lst || !f)
		return ((void*)(0));
	res = (*f)(lst);
	tmp = res;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = (*f)(lst);
		tmp = tmp->next;
	}
	return (res);
}
