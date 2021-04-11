/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:55:36 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/11 22:01:10 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	resultado;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dst[i] != 0)
		++i;
	resultado = 0;
	while (src[resultado] != 0)
		++resultado;
	if (dstsize <= i)
		resultado += dstsize;
	else
		resultado += i;
	j = 0;
	while (src[j] != 0 && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (resultado);
}
