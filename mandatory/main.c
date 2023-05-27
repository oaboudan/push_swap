/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:40:44 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/27 05:11:29 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_vars	vars;

	ft_memset(&vars, 0, sizeof(t_vars));
	if (ac >= 2)
	{
		parse_list(&av[1], &vars);
		if (vars.size_a < 2 || is_sorted(vars.stack_a))
			clear_and_error(&vars, NULL);
		if (is_dup(vars.stack_a))
			clear_and_error(&vars, "Error: duplicates\n");
		index_dtk(&vars);
		if (vars.size_a <= 3)
			sort_3(&vars);
		else if (vars.size_a == 5 || vars.size_a == 4)
			sort_5(&vars);
		else if (vars.size_a > 5)
			sort_stack(&vars);
		clear_and_error(&vars, NULL);
	}
}
