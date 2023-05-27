/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 02:02:32 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/27 05:22:57 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	sub_sort_stack(t_vars *vars, int *pv1, int *pv2, int *last_pv1)
{
	if (vars->size_b > 1
		&& vars->stack_b->index < *pv2 && vars->stack_b->index > *last_pv1
		&& vars->stack_a->index > *pv1)
		rr(vars, RR);
	else if (vars->size_b > 1 && vars->stack_b->index < *pv2
		&& vars->stack_b->index > *last_pv1)
		rb(vars, RB);
	if (vars->stack_a->index < *pv1)
		push_b(vars, PB);
	else
		ra(vars, RA);
	if (vars->size_b == *pv1)
	{
		last_pv1 = pv1;
		*pv2 = (vars->size_a / 6) + *pv1;
		*pv1 += vars->size_a / 3;
	}
}

void	sort_stack(t_vars *vars)
{
	int	pv1;
	int	last_pv1;
	int	pv2;

	pv1 = 0;
	pv2 = (vars->size_a / 6) + pv1;
	pv1 += vars->size_a / 3;
	last_pv1 = -1;
	while (vars->size_a > 3)
		sub_sort_stack(vars, &pv1, &pv2, &last_pv1);
	sort_3(vars);
	back_to_stack_a(vars);
}
