/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 02:02:32 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/25 09:08:02 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h" 

int	half_stack(t_vars *vars)
{
	int i;
	t_list *vb;
	
	vb = vars->stack_b;
	i = vars->size_b / 2;
	while (i--)
	{
		if(vars->stack_a->index - 1 == vb->index)
			return 1;
		vb = vb->next;
	}
	return 0;
}
void	back_to_stack_a(t_vars *vars)
{
	int b = 0;
	int max;
	max = ft_lstlast(vars->stack_a)->index;

	while (vars->size_b)
	{
		if (half_stack(vars))
		{
			while (vars->stack_a->index - 1 != vars->stack_b->index  && vars->size_b)
			{
				if (!b || vars->stack_b->index > ft_lstlast(vars->stack_a)->index)
				{
					push_a(vars, PA);
					ra(vars, RA);
					b = 1;
				}
				else
					rb(vars, RB);
			}
			push_a(vars, PA);
		}
		else
		{
			while (vars->stack_a->index - 1 != vars->stack_b->index && vars->size_b)
			{
				if (!b || vars->stack_b->index > ft_lstlast(vars->stack_a)->index)
				{
					push_a(vars, PA);
					ra(vars, RA);
					b = 1;
				}
				else
					rrb(vars, RRB);
			}
			push_a(vars, PA);
			
		}
		// ALGORITHM NACER

		while (vars->stack_a->index - 1 == ft_lstlast(vars->stack_a)->index)
			rra(vars,RRA);	
		if ( ft_lstlast(vars->stack_a)->index == max)
			b = 0;
	}
	
}
void	sort_stack(t_vars *vars)
{
	int pv1 = 0;
	int last_pv1 = -1;
	int pv2 = (vars->size_a / 6) + pv1;
	pv1 += vars->size_a / 3;
	
	while (vars->size_a > 3)
	{
		if (vars->size_b > 1 && vars->stack_b->index < pv2 && vars->stack_b->index > last_pv1 && vars->stack_a->index > pv1)
			rr(vars, RR);
		else if (vars->size_b > 1 && vars->stack_b->index < pv2 && vars->stack_b->index > last_pv1)
			rb(vars,RB);
		if(vars->stack_a->index < pv1)
			push_b(vars,PB);
		else
			ra(vars,RA);
		if (vars->size_b == pv1)
		{
			last_pv1 = pv1;
			pv2 = (vars->size_a / 6) + pv1;
			pv1 += vars->size_a / 3;
		}
	}
	sort_3(vars);
	back_to_stack_a(vars);
}










































// void	back_to_stack_a(t_vars *vars)
// {
// 	int b = 0;
// 	int max;
// 	max = ft_lstlast(vars->stack_a)->index;
	
// 	// while (vars->stack_a)
// 	// {
// 	// 	printf("%d ", vars->stack_a->index);
// 	// 	vars->stack_a = vars->stack_a->next;
// 	// }exit(0);
	
// 	while (vars->size_b)
// 	{
// 		if(vars->stack_b->index == vars->stack_a->index - 1)
// 			push_a(vars,PA);
// 		else if (ft_lstlast(vars->stack_b)->index == vars->stack_a->index - 1)
// 		{
// 			rrb(vars,RRB);
// 			push_a(vars,PA);
// 		}
// 		if (b == 0)
// 		{
// 			push_a(vars,PA);
// 			ra(vars,RA);
// 			b = 1;
// 		}
// 		else if (vars->stack_b->index > ft_lstlast(vars->stack_a)->index)
// 		{
// 			push_a(vars,PA);
// 			ra(vars,RA);
// 		}
// 		else
// 			rb(vars,RB);
// 		while (vars->stack_a->index - 1 == ft_lstlast(vars->stack_a)->index)
// 			rra(vars,RRA);	
// 		if ( ft_lstlast(vars->stack_a)->index == max)
// 			b = 0;
// 	}
	
// }