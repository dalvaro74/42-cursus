/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:51:30 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/04/13 20:42:02 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	numchar[12];
	int		mod;
	int		i;

	i = 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			write(fd, "-", 1);
		}
		while (n != 0)
		{
			mod = n % 10;
			numchar[i++] = mod + 48;
			n = n / 10;
		}
		while (--i >= 0)
			write(fd, &numchar[i], 1);
	}
}
