/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 22:39:35 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/28 00:30:07 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	check_inst(char *inst, t_vars *vars)
{
	if (ft_strcmp(inst, "sa\n") && ft_strcmp(inst, "sb\n")
		&& ft_strcmp(inst, "ss\n") && ft_strcmp(inst, "ra\n") \
		&& ft_strcmp(inst, "rb\n") && ft_strcmp(inst, "rr\n") \
		&& ft_strcmp(inst, "rra\n") && ft_strcmp(inst, "rrb\n") \
		&& ft_strcmp(inst, "rrr\n") && ft_strcmp(inst, "pa\n") \
		&& ft_strcmp(inst, "pb\n"))
	{
		clear_and_error(vars, "Error\n");
	}
}
void	do_inst(t_vars *vars, char *inst)
{
	if (!ft_strcmp(inst, "sa\n"))
		swap_stack(vars->stack_a,NULL,vars->size_a);
	else if (!ft_strcmp(inst, "sb\n"))
		swap_stack(vars->stack_b,NULL,vars->size_b);
	else if (!ft_strcmp(inst, "ss\n"))
		ss(vars, NULL);
	else if (!ft_strcmp(inst, "ra\n"))
		ra(vars,NULL);
	else if (!ft_strcmp(inst, "rb\n"))
		rb(vars,NULL);
	else if (!ft_strcmp(inst, "rr\n"))
		rr(vars,NULL);
	else if (!ft_strcmp(inst, "rra\n"))
		rra(vars,NULL);
	else if (!ft_strcmp(inst, "rrb\n"))
		rrb(vars,NULL);
	else if (!ft_strcmp(inst, "rrr\n"))
		rrr(vars,NULL);
	else if (!ft_strcmp(inst, "pa\n"))
		push_a(vars,NULL);
	else if (!ft_strcmp(inst, "pb\n"))
		push_b(vars,NULL);
}
int	main(int ac, char **av)
{
	t_vars	vars;
	char	*inst;

	inst = NULL;
	ft_memset(&vars, 0, sizeof(t_vars));
	if (ac >= 2)
	{
		parse_list(&av[1], &vars);
		if (is_dup(vars.stack_a))
			clear_and_error(&vars, "Error: duplicates\n");
		inst = get_next_line(0);
		while (inst)
		{
			check_inst(inst,&vars);
			do_inst(&vars,inst);
			inst = get_next_line(0);
		}
		if (is_sorted(vars.stack_a) && vars.size_b == 0)
			write(1, "OK\n",3);
		else
			write(1, "KO\n",3);
		clear_and_error(&vars, NULL);
	}
}