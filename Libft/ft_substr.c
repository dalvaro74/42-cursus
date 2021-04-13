/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:04:32 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/13 21:51:20 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	int		size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if ((int)start > size)
	{
		s2 = (char *)malloc(sizeof(char));
		s2[0] = '\0';
		return (s2);
	}
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	if (len < (size - start))
	{
		ft_memcpy(s2, s + start, len);
		s2[len] = '\0';
	}
	else
	{
		ft_memcpy(s2, s + start, size - start);
		s2[(size - start)+1] = '\0';
	}
	return (s2);
	
	// char	*str;
	// size_t	i;

	// if (!s)
	// 	return (NULL);
	// if (ft_strlen(s) < start)
	// {
	// 	str = malloc(sizeof(char));
	// 	str[0] = '\0';
	// 	return (str);
	// }
	// else
	// {
	// 	if (start + len > ft_strlen(s))
	// 		len = ft_strlen(s) - start;
	// 	str = malloc(sizeof(char) * (len + 1));
	// 	if (!str)
	// 		return (NULL);
	// 	i = 0;
	// 	while (++i - 1 < len)
	// 		*(str + i - 1) = *(s + start + i - 1);
	// 	*(str + i - 1) = '\0';
	// 	return (str);
	// }
}
