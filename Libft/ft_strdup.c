/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:54:15 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/12 16:32:55 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		size;

	size = ft_strlen(s1);
	s2 = (char *)malloc(size + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, size + 1);
	return (s2);
}
