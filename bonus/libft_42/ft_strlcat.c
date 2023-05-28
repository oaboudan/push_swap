/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:47 by oaboudan          #+#    #+#             */
/*   Updated: 2022/11/11 01:03:54 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;

	i = 0;
	if (!dstsize || (!dstsize && !dst))
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	if (dstsize > dlen)
	{
		while (i < dstsize - dlen - 1 && src[i])
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[i + dlen] = '\0';
		return (dlen + ft_strlen(src));
	}
	return (ft_strlen(src) + dstsize);
}
