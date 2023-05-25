/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:40:44 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/25 09:06:02 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"


void	ft_puterror(char *err)
{
	while (*err)
		write(2,err++,1);
	exit(1);
}


int	is_dup(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->content == tmp->content)
				return (1);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	is_sorted(t_list *lst)
{
	t_list	*n1;
	t_list	*n2;
	
	n1 = lst;
	n2 = lst->next;
	while ((n1 && n2))
	{
		if (n1->content >= n2->content)
			return (0);
		n1 = n2;
		n2 = n2->next;
	}
	return (1);
}

// void	leaks()
// {
// 	system("leaks push_swap");
// }

void	print_list(t_list *stk)
{
	if (!stk)
	{
		printf("stack is empty\n");
		return ;
	}
	while (stk)
	{
		printf("%d\n", stk->index);
		stk = stk->next;
	}
}

// void	sort_stack(t_vars *vars)
// {
	
// }


int main( int ac ,char **av)
{
	t_vars	vars;

	// atexit(leaks);
	ft_memset(&vars, 0, sizeof(t_vars));
	if(ac >= 2)
	{
		parse_list(&av[1], &vars);
		if (vars.size_a < 2 || is_sorted(vars.stack_a))
			clear_and_error(&vars, NULL);
		if (is_dup(vars.stack_a))
			clear_and_error(&vars, "Error: duplicates\n");
		
		// ss(&vars, SS);
		// push_b(&vars, PB);
		// push_b(&vars, PB);
		// push_b(&vars, PB);
		// push_a(&vars , PA);
		// ss(&vars, SS);
		//  rrr(&vars,RRA);
		// printf("stack a:\n");
		// printf("______instractions: ______\n");
		// if (vars.size_a <= 5)
		// 	sort_5(&vars);
		// printf("____________");
		// // 
		index_dtk(&vars);
		
		sort_stack(&vars);
		// printf("stack bstack_a:\n");
		// print_list(vars.stack_a);
		
		// sort_stack(&vars);
		clear_and_error(&vars, NULL);
	}
}
