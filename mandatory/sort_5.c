/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 05:22:03 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/27 05:19:42 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_min(t_list *stk, int *min1)
{
	t_list	*n;

	n = stk;
	*min1 = n->content;
	while (n)
	{
		if (n->content < *min1)
			*min1 = n->content;
		n = n->next;
	}
}

void	sort_4(t_vars *vars)
{
	int	min;

	get_min(vars->stack_a, &min);
	while (vars->stack_a->content != min)
		ra(vars, RA);
	push_b(vars, PB);
	sort_3(vars);
	push_a(vars, PA);
}

void	sort_5(t_vars *vars)
{
	int	min;

	if (!vars->stack_a)
		return ;
	if (vars->size_a == 4)
	{
		sort_4(vars);
		return ;
	}
	get_min(vars->stack_a, &min);
	if (vars->stack_a->next->next->next->next->content == min)
		rra(vars, RRA);
	while (vars->stack_a->content != min)
		ra(vars, RA);
	push_b(vars, PB);
	sort_4(vars);
	push_a(vars, PA);
}
