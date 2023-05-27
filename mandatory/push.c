/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:24:12 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/27 05:13:40 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_vars *vars, char *op)
{
	t_list	*node;

	if (!vars->size_a)
		return ;
	node = vars->stack_a;
	vars->stack_a = vars->stack_a->next;
	node->next = NULL;
	ft_lstadd_front(&vars->stack_b, node);
	vars->size_a--;
	vars->size_b++;
	if (op)
		ft_putendl_fd(op, 1);
}

void	push_a(t_vars *vars, char *op)
{
	t_list	*node;

	if (!vars->size_b)
		return ;
	node = vars->stack_b;
	vars->stack_b = vars->stack_b->next;
	node->next = NULL;
	ft_lstadd_front(&vars->stack_a, node);
	vars->size_b--;
	vars->size_a++;
	if (op)
		ft_putendl_fd(op, 1);
}
