/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:45:30 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/27 05:10:10 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_min1(t_list *stk)
{
	t_list	*n;
	t_list	*search;

	n = stk;
	search = NULL;
	while (n)
	{
		if ((search == NULL || n->content < search->content) && n->index == -4)
			search = n;
		n = n->next;
	}
	return (search);
}

void	index_dtk(t_vars *vars)
{
	t_list	*node;
	int		i;
	int		j;

	i = 0;
	j = vars->size_a;
	while (j != 0)
	{
		node = get_min1(vars->stack_a);
		node->index = i++;
		j--;
	}
}
