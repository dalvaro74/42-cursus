/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:57:06 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/13 18:27:24 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	buffer;

	i = 0;
	buffer = 0;
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[buffer] != '\0')
		buffer++;
	while (i < dstsize - 1)
	{
		if (src[i] != '\0')
			dst[i] = src[i];
		else
		{
			dst[i] = '\0';
			return (buffer);
		}
		i++;
	}
	dst[i] = '\0';
	return (buffer);
}
