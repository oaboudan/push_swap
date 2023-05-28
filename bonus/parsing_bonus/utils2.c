/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 04:01:12 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/28 00:06:05 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	str_isspace(char *s)
{
	while (*s && ft_isspace(*s))
		s++;
	if (!*s)
		return (1);
	return (0);
}

void	check_spase(char **av, t_vars *vars)
{
	if (!*av[0] || str_isspace(*av))
		clear_and_error(vars, "Error\n");
}
