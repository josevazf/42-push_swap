/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:49:31 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/28 12:02:43 by jrocha-v         ###   ########.fr       */
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

// FILE: ft_atoi.c
int		ft_atoi(const char *str);
int		ft_istdelimiter(char c);
int		ft_tobinary(long nbr);

// FILE: stack_create.c
void	create_stack_a(char **argv, t_stack **stack_a);
t_stack	*ft_create_node(int value, long index);
void    ft_print_stack(t_stack *list);
void	ft_stack_push_back(t_stack **begin_stack, int value, long index);

// FILE: shadow_sort.c
void	shadow_sort(t_stack **stack_a, int list_length);
t_stack	*get_min(t_stack *stack_a, int list_length);

void	error_handle();

#endif
