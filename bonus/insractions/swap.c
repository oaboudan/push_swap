/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 03:52:30 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/30 03:29:53 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h" 

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	swap_stack(t_list *stk, char *op, int n)
{
	if (n < 2)
		return ;
	ft_swap(&stk->content, &stk->next->content);
	if (op)
		ft_putendl_fd(op, 1);
}

void	ss(t_vars *vars, char *op)
{
	if (vars->size_a < 2 && vars->size_b < 2)
		return ;
	swap_stack(vars->stack_a, NULL, vars->size_a);
	swap_stack(vars->stack_b, NULL, vars->size_b);
	if (op)
		ft_putendl_fd(op, 1);
}
