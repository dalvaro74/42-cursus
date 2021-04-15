/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:41:55 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/16 00:45:03 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	size_ptr(int n)
{
	int		size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*ptr;
	int		end_ptr;

	num = n;
	end_ptr = size_ptr(n);
	ptr = (char *)malloc(end_ptr);
	if (!ptr)
		return (NULL);
	ptr[--end_ptr] = '\0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = num * -1;
	}
	if (num == 0)
		ptr[0] = '0';
	while (num != 0)
	{
		end_ptr--;
		ptr[end_ptr] = (num % 10) + '0';
		num = num / 10;
	}
	return (ptr);
}
