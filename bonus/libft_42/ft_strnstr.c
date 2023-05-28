/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:16:13 by oaboudan          #+#    #+#             */
/*   Updated: 2022/11/11 01:04:14 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!hay && len == 0)
		return (NULL);
	if (!*hay && !*ndl)
		return ((char *)hay);
	while (hay[i] != '\0')
	{
		while (hay[i + j] == ndl[j] && i + j < len && hay[i + j] != '\0')
			j++;
		if (!ndl[j])
			return ((char *)hay + i);
		i++;
		j = 0;
	}
	return (0);
}
