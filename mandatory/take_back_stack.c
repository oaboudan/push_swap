/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_back_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 04:55:42 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/27 05:28:42 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	half_stack(t_vars *vars)
{
	int		i;
	t_list	*vb;

	vb = vars->stack_b;
	i = vars->size_b / 2;
	while (i--)
	{
		if (vars->stack_a->index - 1 == vb->index)
			return (1);
		vb = vb->next;
	}
	return (0);
}

void	sub_back_to_stack1(t_vars *vars, int *b)
{
	while (vars->stack_a->index - 1 != vars->stack_b->index && vars->size_b)
	{
		if (!*b || vars->stack_b->index > ft_lstlast(vars->stack_a)->index)
		{
			push_a(vars, PA);
			ra(vars, RA);
			*b = 1;
		}
		else
			rb(vars, RB);
	}
	push_a(vars, PA);
}

void	sub_back_to_stack2(t_vars *vars, int *b)
{
	while (vars->stack_a->index - 1 != vars->stack_b->index && vars->size_b)
	{
		if (!*b || vars->stack_b->index > ft_lstlast(vars->stack_a)->index)
		{
			push_a(vars, PA);
			ra(vars, RA);
			*b = 1;
		}
		else
			rrb(vars, RRB);
	}
	push_a(vars, PA);
}

void	back_to_stack_a(t_vars *vars)
{
	int	b;
	int	max;

	b = 0;
	max = ft_lstlast(vars->stack_a)->index;
	while (vars->size_b)
	{
		if (half_stack(vars))
			sub_back_to_stack1(vars, &b);
		else
			sub_back_to_stack2(vars, &b);
		while (vars->stack_a->index - 1 == ft_lstlast(vars->stack_a)->index)
			rra(vars, RRA);
		if (ft_lstlast(vars->stack_a)->index == max)
			b = 0;
	}
}
