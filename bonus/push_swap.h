/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboudan <oaboudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:41:05 by oaboudan          #+#    #+#             */
/*   Updated: 2023/05/28 00:05:19 by oaboudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <ctype.h>
# include <limits.h>
# include "libft_42/libft.h"
# include "gnl/get_next_line.h"

# define SA "sa"
# define SB "sb"
# define PB "pb"
# define PA "pa"
# define RA "ra"
# define RB "rb"
# define RRA "rra"
# define RRB "rrb"
# define SS "ss"
# define RR "rr"
# define RRR "rrr"

typedef struct s_vars
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size_a;
	int		size_b;
}	t_vars;

void	ft_puterror(char *err);
int		is_dup(t_list *lst);
int		is_sorted(t_list *lst);
void	check_spase(char **av, t_vars *vars);
void	parse_list(char **av, t_vars *vars);

// t_list	*parse_stack(char **av);
void	free_list(t_list **list);
void	parse_list(char **av, t_vars *vars);
void	clear_and_error(t_vars *vars, char *err);

// instractions
void	swap_stack(t_list *stk, char *op, int n);
void	ss(t_vars *vars, char *op);
void	push_b(t_vars *vars, char *op);
void	push_a(t_vars *vars, char *op);
void	ra(t_vars *vars, char *op);
void	rb(t_vars *vars, char *op);
void	rra(t_vars *vars, char *op);
void	rrb(t_vars *vars, char *op);
void	rrr(t_vars *vars, char *op);
void	rr(t_vars *vars, char *op);
//sorting


#endif