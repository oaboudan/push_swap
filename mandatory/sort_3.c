/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 02:22:41 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/25 05:49:09 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	getmax(t_list *stk,int *max)
{
	*max = stk->content;
	while (stk)
	{
		if (stk->content > *max)
			*max = stk->content;	
		stk = stk->next;
	}
	
}
void	sort_3(t_vars *vars)
{
	int max;

	if (!vars->stack_a)
		return ;
	if (vars->size_a == 2)
	{
		swap_stack(vars->stack_a, SA, vars->size_a);
		return ;
	}
	getmax(vars->stack_a,&max);

	if (vars->size_a == 3)
	{
		if (vars->stack_a->content == max)
			ra(vars,RA);
		else if (vars->stack_a->next->content == max)
			rra(vars,RRA);
	}
	if(vars->stack_a->content > vars->stack_a->next->content)
		swap_stack(vars->stack_a, SA,vars->size_a);
}