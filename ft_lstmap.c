/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:48:25 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/03 14:02:44 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current;
	t_list	*res_lst;
	int		i;

	i = 0;
	current = lst;
	res_lst = ft_lstnew(current->content, current->content_size);
	while (current->next != (void*)(0))
	{
		i++;
		ft_lstadd(&res_lst, f(current));
		current = current->next;
//		printf("%d\n", i);
	}
	return (res_lst);
}	
