/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:49:31 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/30 12:41:34 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct		s_stack 
{
	int 			index;
	int				bin_index;
	int				value;
	struct s_stack 	*next;
}	t_stack;


//	FILE: check_args.c
int 	check_args(char **argv);
int		is_number(char *argv);
int		is_duplicate(char **argv);

// FILE: check_args_utils.c
int		is_sign(char c);
int		is_digit(char c);
int		intcmp(const char *s1, const char *s2);

// FILE: number_converter.c
int		ft_atoi(const char *str);
int		isdelimiter(char c);
int		ft_itobi(int nbr);

// FILE: stack_create.c
void	create_stack_a(char **argv, t_stack **stack_a);
t_stack	*create_node(int value, long index);
void    print_stack(t_stack *list);
void	stack_push_back(t_stack **begin_stack, int value, long index);

// FILE: shadow_sort.c
void	shadow_sort(t_stack **stack_a, int list_length);
t_stack	*get_min(t_stack *stack_a, int list_length);

void	error_handle();

#endif
