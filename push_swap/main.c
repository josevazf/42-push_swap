/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:52:40 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/01 13:12:47 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Checks if the input is correct, if it is initializes stacks a and b,
//	assigns each value and sorted indexes. When sorting is done, frees
//	the stacks and exits.
int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack *stack_b;

	if (argc < 2)
		return (0);
	if (!check_args(argv))
		error_handle();
	stack_b = NULL;
	stack_a = create_stack_a(argv, &stack_a);
	shadow_sort(&stack_a, argc - 1);
		printf("-- STACK A--\n");
		print_stack(stack_a);
		printf("-- STACK B --\n");
		print_stack(stack_b);
		
	//main_sort(&stack_a, &stack_b, argc - 1);
	pb(&stack_b, &stack_a);
		printf("-- STACK A--\n");
		print_stack(stack_a);
		printf("-- STACK B --\n");
		print_stack(stack_b);
		
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}