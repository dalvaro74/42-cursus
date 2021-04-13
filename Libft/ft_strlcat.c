/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:55:36 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/13 18:17:59 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len > dstsize)
		return (dstsize + ft_strlen(src));
	while (len + 1 < dstsize && *src)
		dst[len++] = *src++;
	dst[len] = '\0';
	while (*src++)
		len++;
	return (len);
}
