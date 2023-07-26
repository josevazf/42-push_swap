/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:49:31 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/26 16:00:16 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_stack 
{
	int value;
	struct s_stack *next;
	struct s_stack *prev;
}	t_stack;


// check_args.c
int 	check_args(char **argv);
int		is_number(char *argv);
int		is_sign(char c);
int		is_digit(char c);
int		is_duplicate(char **argv);
int		intcmp(const char *s1, const char *s2);

void	error_handle();

#endif