/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:07 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/01 13:16:55 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_stack *stack_a, int list_length)
{
	while (list_length--)
	{
		if (stack_a->value > stack_a->next->value)
			return (0);
		if (stack_a->next == NULL)
			return (1);
		stack_a = stack_a->next;		
	}
	return (1);
}

void	main_sort(t_stack **stack_a, t_stack **stack_b, int list_length)
{
	t_stack *current;
	int 	bit;
	int 	push_back;
	int 	size;
	
	bit = 0;
	size = list_length;
	push_back = 0;
	current = *stack_a;
	while(++bit)
	{
		if (is_sorted(*stack_a, list_length))
			return ;
		while (size--)
		{
			if ((((*stack_a)->value >> (bit - 1)) & 1) == 0)
			{
				pb(&stack_b, &stack_a);
				push_back++;
			}	
			else
				ra(&stack_a);
		}
		while (push_back--)
			pa(&stack_a, &stack_b);
	}
}
