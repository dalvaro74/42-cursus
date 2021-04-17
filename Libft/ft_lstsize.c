/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 00:52:43 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/17 01:02:00 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		size;

	if (!lst)
		return (0);
	size = 1;
	ptr = lst;
	while (ptr->next)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
