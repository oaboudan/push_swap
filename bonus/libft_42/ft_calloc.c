/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:46:12 by oaboudan          #+#    #+#             */
/*   Updated: 2022/11/11 01:01:59 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc (count * size);
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	if (!p)
		return (NULL);
	ft_bzero (p, count * size);
	return (p);
}
