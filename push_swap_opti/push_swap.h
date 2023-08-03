/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:49:31 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/03 12:22:42 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef	struct		s_stack 
{
	int 			index;
	int				bin_index;
	int				stack_pos;
	int				value;
	struct s_stack 	*next;
	struct s_stack	*previous;
}	t_stack;

// check_args.c
int 	check_args(char **argv);
int		is_number(char *argv);
int		is_duplicate(char **argv);

// check_args_utils.c
int		is_sign(char c);
int		is_digit(char c);
int		intcmp(const char *s1, const char *s2);

// n_converter.c
int		ft_atoi(const char *str);
int		isdelimiter(char c);
int		ft_itobi(int nbr);

// stack_create.c
t_stack	*create_stack_a(char **argv, t_stack **stack_a);
t_stack	*create_node(int value, long index, t_stack *previous);
void    print_stack(t_stack *list);
void	stack_push_back(t_stack **begin_stack, int value, long index);
t_stack	*stack_last(t_stack *begin_stack);

// shadow_sort.c
void	shadow_sort(t_stack **stack_a, int list_length);
t_stack	*get_min(t_stack *stack_a, int list_length);

// op_swap.c
void	swap(t_stack *stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

// op_push.c
void	push(t_stack **stack_to, t_stack **stack_from);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);

// op_rotate.c
void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

// op_rev_rotate.c
void	rev_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

// main_utils.c
void	error_handle();
void	free_stack(t_stack **stack);

// main_sort.c
void	main_sort(t_stack **stack_a, t_stack **stack_b, int stack_size);
void	big_sort(t_stack **stack_a, t_stack **stack_b, int stack_size);
void	med_sort(t_stack **stack_a, t_stack **stack_b, int stack_size);
void	small_sort(t_stack **stack_a);
int		is_sorted(t_stack *stack_a);
int		highest_index(t_stack *stack);
int		lowest_index(t_stack *stack);


int		check_bit(t_stack *stack_a, int bit);

#endif
