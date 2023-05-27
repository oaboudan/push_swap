/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_to_buttom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:45:34 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/27 05:05:56 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_vars *vars, char *op)
{
	t_list	*node ;

	if (!vars->stack_a)
		return ;
	node = vars->stack_a;
	vars->stack_a = vars->stack_a->next;
	node->next = NULL;
	ft_lstadd_back(&vars->stack_a, node);
	if (op)
		ft_putendl_fd(op, 1);
}

void	rb(t_vars *vars, char *op)
{
	t_list	*node ;

	if (!vars->stack_b)
		return ;
	node = vars->stack_b;
	vars->stack_b = vars->stack_b->next;
	node->next = NULL;
	ft_lstadd_back(&vars->stack_b, node);
	if (op)
		ft_putendl_fd(op, 1);
}

void	rr(t_vars *vars, char *op)
{
	if (!vars->stack_a && !vars->stack_b)
		return ;
	ra(vars, NULL);
	rb(vars, NULL);
	if (op)
		ft_putendl_fd(op, 1);
}
