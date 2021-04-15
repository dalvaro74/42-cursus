/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:41:55 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/15 21:51:51 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int size_int(int n)
{
	int		size;
	int		mod;
	
	size = 0;
	while (n != 0)
	{
		mod = n % 10;
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*ptr;
	int		end_ptr;
	int		mod;

	num = n;
	if (num < 0)
		end_ptr = size_int(n) +2;
	else
		end_ptr = size_int(n)+1;
	ptr = (char *)malloc(3);
	if(!ptr)
		return (NULL);
	ptr[0] = '\0';
	printf("-----%s\n", ptr);
	end_ptr--;
	while (n != 0)
	{
		mod = n % 10;
		printf("%d\n", end_ptr);
		printf("%d\n", mod);
		ptr[end_ptr] = mod + 48;
		n = n / 10;
		end_ptr--;
	}
	if (num < 0)
		ptr[0] = '-';
	printf("%d\n\n", end_ptr);
	return (ptr);	
}
