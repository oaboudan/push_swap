/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_to_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:35:01 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/30 03:40:13 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h" 

void	ft_rot(t_list **stk)
{
	t_list	*node;
	t_list	*temp;

	if (!stk || !*stk)
		return ;
	temp = *stk;
	while (temp->next->next)
		temp = temp->next;
	node = temp->next;
	temp->next = NULL;
	ft_lstadd_front(stk, node);
}

void	rra(t_vars *vars, char *op)
{
	if (vars->size_a < 2)
		return ;
	ft_rot(&vars->stack_a);
	if (op)
		ft_putendl_fd(op, 1);
}

void	rrb(t_vars *vars, char *op)
{
	if (vars->size_b < 2)
		return ;
	ft_rot(&vars->stack_b);
	if (op)
		ft_putendl_fd(op, 1);
}

void	rrr(t_vars *vars, char *op)
{
	if (!vars->stack_a && !vars->stack_b)
		return ;
	rra(vars, NULL);
	rrb(vars, NULL);
	if (op)
		ft_putendl_fd(op, 1);
}
