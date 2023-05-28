/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:14:44 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/28 00:09:15 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_substr(char *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*t;

// 	i = 0;
// 	if (s == NULL)
// 		return (NULL);
// 	if (len > ft_strlen(s + start))
// 		len = ft_strlen(s + start);
// 	if (start >= ft_strlen(s))
// 		return (ft_strdup(""));
// 	t = (char *)malloc(sizeof(char) * (len + 2));
// 	if (!t)
// 		return (NULL);
// 	while (i < len && s[start] && start < ft_strlen(s))
// 	{
// 		t[i] = s[i + start];
// 		i++;
// 	}
// 	t[i] = '\0';
// 	return (t);
// }

// size_t	ft_strlen(char *src)
// {
// 	size_t	i;

// 	i = 0;
// 	while (src[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(char *s1)
// {
// 	int		len;
// 	char	*p;
// 	int		i;

// 	i = 0;
// 	len = ft_strlen(s1);
// 	p = (char *)malloc(len + 1);
// 	if (!p)
// 		return (NULL);
// 	while (s1[i])
// 	{
// 		p[i] = s1[i];
// 		i++;
// 	}
// 	p[i] = '\0';
// 	return (p);
// }



