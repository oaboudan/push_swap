/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:00:38 by oaboudan          #+#    #+#             */
/*   Updated: 2022/11/11 01:02:26 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlength(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	z;

	z = n;
	len = 0;
	str = (char *)malloc(numlength(z)+ 1);
	if (!str)
		return (NULL);
	if (z < 0)
	{
		str[0] = '-';
		z *= -1;
		len++;
	}
	len += numlength(z);
	str[len--] = '\0';
	while (z >= 0)
	{
		str[len--] = z % 10 + '0';
		z = z / 10;
		if (z == 0)
			break ;
	}
	return (str);
}
