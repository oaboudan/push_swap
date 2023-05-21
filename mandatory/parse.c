/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:53:14 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/20 01:14:59 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	str_isspace(char *s)
{
	while (*s && ft_isspace(*s))
		s++;
	if (!*s)
		return (1);
	return (0);
}

int	arg_isvalid(char *arg)
{
	int len;

	if ((*arg == '+' || *arg == '-') && *(arg + 1) != '\0')
		arg++;
	while (*arg == '0')
		arg++;
	len = 0;
	while (*arg)
	{
		if (!ft_isdigit(*arg))
			return (0);
		len++;
		arg++;
	}
	return (len < 11);
}

void	free_list(t_list **list)
{
	t_list *itr;
	
	if (!list || !*list)
		return ;
	while (*list)
	{
		itr = (*list)->next;
		free(*list);
		*list = NULL;
		*list = itr;
	}
}

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

void	free_dup(char **dup)
{
	int	i;

	i = -1;
	while (dup[++i])
		free(dup[i]);
	free(dup);
}
void	check_spase(char **av,t_vars *vars)
{
	if (!*av[0] || str_isspace(*av))
			clear_and_error(vars, "Error\n");
}
void	parse_list(char **av, t_vars *vars)
{
	char	**spl;
	int		i;
	int		j;
	long 	num;

	i = -1;
	while (av[++i])
	{
		check_spase(&av[i],vars);
		spl = ft_split(av[i], ' ');
		j = -1;
		while (spl[++j])
		{
			num = ft_atol(spl[j]);
			if (!arg_isvalid(spl[j]) || (num > INT_MAX || num < INT_MIN))
			{
				free_dup(spl);	
				clear_and_error(vars, "Error\n");
			}
			ft_lstadd_back(&vars->stack_a , ft_lstnew(num));
			vars->size_a++;
			free(spl[j]);
		}
		free(spl);
	}
}
