/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 03:07:35 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/18 20:03:22 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*begin;

	if (!lst || !f)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	begin = new_lst;
	if (!begin)
	{
		ft_lstclear(&begin, del);
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
		new_lst->next = ft_lstnew(f(lst->content));
		if (!(new_lst->next))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_lst = new_lst->next;
	}
	return (begin);
}
