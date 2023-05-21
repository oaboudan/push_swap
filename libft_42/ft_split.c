/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:18:32 by oaboudan          #+#    #+#             */
/*   Updated: 2022/11/11 01:03:34 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	scount(char *str, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free(char **ptr, int i)
{
	while (i)
		free (ptr[i--]);
	free (ptr);
	return (NULL);
}

char	**ft_split(char const *str, int c)
{
	char	**res;
	int		i;
	int		j;
	int		cnt;

	if (!str)
		return (NULL);
	i = 0;
	cnt = -1;
	res = (char **)malloc(sizeof(char *) * (scount((char *)str, c) + 1));
	if (!res)
		return (NULL);
	while (++cnt < scount((char *)str, c))
	{
		while (str[i] && str[i] == c)
			i++;
		j = i;
		while (str[i] && str[i] != c)
			i++;
		res[cnt] = ft_substr(str, j, i - j);
		if (!res[cnt])
			return (ft_free(res, cnt));
	}
	res[cnt] = 0;
	return (res);
}
