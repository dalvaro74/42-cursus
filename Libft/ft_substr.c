/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:04:32 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/12 16:33:18 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
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
