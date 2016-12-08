/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:09:43 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/03 14:02:23 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->content = (char*)(malloc(sizeof(char) * (ft_strlen(content) + 1)));
	new->content_size = (int)(malloc(sizeof(int) * content_size));	
	ft_memcpy(new->content, content, content_size);	
	new->content_size = content_size;
	return (new);
}
