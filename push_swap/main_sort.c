/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:07 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/09 10:15:19 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* int	check_bit(t_stack *stack_a, int bit)
{
	t_stack		*stack;

	stack = stack_a;
	printf("Bit-check: %i\n", bit);
	printf("Index: %i\n", stack->index);
	while (stack->next)
	{
		if (((stack->index >> bit) & 1) == 0)
			return (1);
		stack = stack->next;
	}
	return (0);
} */

int		is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->value > (stack->next->value))
			return (0);
		if (stack->next == NULL)
			return (1);
		stack = stack->next;
	}
	return (1);
}

void	main_sort(t_stack **stack_a, t_stack **stack_b, int list_length)
{
	int 	bit;
	int 	size;
	
	bit = 0;
	while (!is_sorted(*stack_a))
	{
		size = list_length;
		while (size--)
		{
			if (((((*stack_a)->index) >> bit) & 1) == 0)
			{
				pb(stack_b, stack_a);
			}	
			else
				ra(stack_a);
		}
		while (*stack_b != NULL)
		{
			pa(stack_a, stack_b);
		}
		bit++;
	}
}
