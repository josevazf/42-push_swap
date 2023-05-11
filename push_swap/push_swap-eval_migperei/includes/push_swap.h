/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:33:36 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 14:03:54 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

//operations
void	pa(long *stack_a, long *stack_b, int *num_a, int *num_b);
void	pb(long *stack_a, long *stack_b, int *num_a, int *num_b);
void	sa(long *stack_a, int *num_a);
void	sb(long *stack_b, int *num_b);
void	ss(long *stack_a, long *stack_b, int *num_a, int *num_b);
void	ra(long *stack_a, int *num_a);
void	rb(long *stack_b, int *num_b);
void	rr(long *stack_a, long *stack_b, int *num_a, int *num_b);
void	rra(long *stack_a, int *num_a);
void	rrb(long *stack_b, int *num_b);
void	rrr(long *stack_a, long *stack_b, int *num_a, int *num_b);

void	free_stacks(long *stack_a, long *stack_b, int *num_a, int *num_b);
void	free_string(char **str);
void	free_and_exit_without_errors(int *num_a, int *num_b);
void	free_and_exit(int *num_a, int *num_b);

void	parameters(long *stack_a, long *stack_b, int *num_a, int *num_b);

int		ver_limites(long *stack_a, int num_a);
int		param_repet(long *stack_a, int num_a);
int		ver_numeros(char *param_num);
int		lista_tamanho(int argc, char **argv);
int		sep_param(long *stack_a, int *num_a, char **argv);
int		lista_ord(long *stack_a, int *num_a);

char	**ft_split(char const *str, char c);
int		ft_strlen(const char *str);
int		ft_isdigit(int i);
long	ft_atoi(const char *str);

void	sort_3_numbers(long *stack_a, int *num_a);
void	sort_5_numbers(long *stack_a, long *stack_b, int *num_a, int *num_b);
void	sort_oth_numbers(long *stack_a, long *stack_b, int *num_a, int *num_b);
void	sort_a_section_of_the_stack(long *array, int *stack_size);
void	sw_st_1st(long *copy, long *cpy_sw_stack_a, long *lista_a, int *num_a);
void	sw_st_2st(long *copy, long *cpy_sw_stack_a, long *lista_a, int *num_a);
void	sw_st_3st(long *lista_a, long *lista_b, int *num_a, int *num_b);
void	rot_st_radix(long *lista_a, int *num_a);
void	rev_rot_st_radix(long *lista_a, int *num_a);
void	first_stack(long *lista_a, long *lista_b, int *num_a, int *num_b);
void	second_stack(long *lista_a, long *lista_b, int *num_a, int *num_b);

#endif
