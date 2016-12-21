/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:09:43 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/21 16:18:32 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!content)
	{
		new = (t_list*)malloc(sizeof(t_list));
		new->content = (void*)(0);
		new->content_size = 0;
		return (new);
	}
	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (void*)(0);
	if (!(new->content = (char*)(malloc(sizeof(char) * (content_size + 1)))))
		return (void*)(0);
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	new->next = 0;
	return (new);
}
