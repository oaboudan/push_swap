/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:47:45 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/28 00:16:17 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	size;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return (1);
	size = ft_strlen(s);
	while (i <= size)
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}
