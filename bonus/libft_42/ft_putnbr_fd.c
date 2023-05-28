/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:54:36 by oaboudan          #+#    #+#             */
/*   Updated: 2022/11/11 01:03:27 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	a;
	char	c;

	a = n;
	if (a < 0)
	{
		write(fd, "-", 1);
		a *= -1;
	}
	if (a >= 0 && a <= 9)
	{
		c = a + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putchar_fd(((a % 10) + '0'), fd);
	}
}
