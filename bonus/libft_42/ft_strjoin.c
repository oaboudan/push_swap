/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:31:33 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/28 00:08:41 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	size_t	j;
	size_t	i;
	size_t	size_s1;
	size_t	size_s2;

	i = 0;
	j = -1;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	res = (char *)malloc(size_s1 + size_s2 + 1);
	if (!res)
		return (NULL);
	while (++j < size_s1)
		res[j] = s1[j];
	while (i < size_s2)
		res[j++] = s2[i++];
	res[j] = '\0';
	return ((free(s1)), (s1 = NULL), (res));
}
