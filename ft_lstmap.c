/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminasia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:13:10 by lminasia          #+#    #+#             */
/*   Updated: 2026/02/13 23:13:23 by lminasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_tail;
	t_list	*new_node;
	void	*new_content;

	if (!f || !del)
		return (NULL);
	new_head = NULL;
	new_tail = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		if (!new_head)
		{
			new_head = new_node;
			new_tail = new_node;
		}
		else
		{
			new_tail->next = new_node;
			new_tail = new_node;
		}
		lst = lst->next;
	}
	return (new_head);
}

