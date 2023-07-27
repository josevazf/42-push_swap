/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:49:31 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/27 11:44:20 by jrocha-v         ###   ########.fr       */
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


// check_args.c
int 	check_args(char **argv);
int		is_number(char *argv);
int		is_sign(char c);
int		is_digit(char c);
int		is_duplicate(char **argv);
int		intcmp(const char *s1, const char *s2);

// ft_atoi.c
int	ft_atoi(const char *str);
int	ft_istdelimiter(char c);

void	error_handle();

#endif