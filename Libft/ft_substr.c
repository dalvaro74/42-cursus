/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:04:32 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/14 15:31:28 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	size;
	size_t	upto;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
	{
		s2 = (char *)malloc(sizeof(char));
		s2[0] = '\0';
		return (s2);
	}
	if (len < (size - start))
		upto = len;
	else
		upto = size - start;
	s2 = (char *)malloc(upto + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s + start, upto);
	s2[upto] = '\0';
	return (s2);
}
