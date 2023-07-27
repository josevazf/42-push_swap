/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:52:40 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/27 14:15:16 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Displays error message and exits with standard error code 1
// *********** MOVE TO NEW FILE **********************
void	error_handle()
{
	write(2, "Error\n", 6);
	exit (1);
}

//	Checks if the input is correct, if it is initializes stacks a and b,
//	assigns each value indexes and sorts the stacks. When sorting is done, frees
//	the stacks and exits.
int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	//t_stack	*stack_b;
	//int		stack_size;

	//stack_a = malloc(sizeof(t_stack));
	if (argc < 2)
		return (0);
	if (!check_args(argv, &stack_a))
		error_handle();
	ft_print_stack(stack_a);
	return (0);
}
