/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:47:51 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/12 01:11:10 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*end_dst;
	const char	*end_src;

	end_dst = dst;
	end_src = src;
	if (src > dst)
		return (memcpy(dst, src, len));
	else
		while (len--)
			end_dst[len] = end_src[len];
	return (dst);
}
