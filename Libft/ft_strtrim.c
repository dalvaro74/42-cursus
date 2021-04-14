/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:03:35 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/14 20:02:53 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	init;
	size_t	finish;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	finish = ft_strlen(s1) - 1;
	init = 0;
	while (s1[init] && ft_strchr(set, s1[init]))
		init++;
	while (ft_strchr(set, s1[finish]) && finish > init)
		finish--;
	len = finish - init;
	ptr = ft_substr(s1, (unsigned int)init, (finish - init) + 1);
	return (ptr);
}
