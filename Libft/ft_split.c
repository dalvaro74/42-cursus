/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:52:48 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/16 00:45:26 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_words(char const *s, char c)
{
	int		cont;

	cont = 0;
	while (*s)
	{
		if (*s != c)
		{
			cont++;
			while (*s != c && *s)
				s++;
		}
		if (*s)
			s++;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	char		**ptr;	
	const char	*initpos;
	int			i;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char **)malloc((cont_words(s, c) + 1) * (sizeof (char *)));
	if (!ptr)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			initpos = s;
			while (*s != c && *s)
				s++;
			ptr[i] = ft_substr(initpos, 0, (s - initpos));
			i++;
		}
		else
			s++;
	}
	ptr[i] = NULL;
	return (ptr);
}
