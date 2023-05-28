/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 03:56:39 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/28 00:36:35 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

void	clear_and_error(t_vars *vars, char *err)
{
	if (vars->stack_a)
		free_list(&vars->stack_a);
	if (vars->stack_b)
		free_list(&vars->stack_b);
	if (err)
		ft_puterror(err);
	exit(0);
}

void	ft_puterror(char *err)
{
	while (*err)
		write(2, err++, 1);
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

	if (!lst)
		return (0);
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
