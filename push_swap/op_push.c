/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:38:59 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/31 17:28:36 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack *first_to;
	t_stack *first_from;
	t_stack *temp;
	
	first_from = (*stack_from)->next;
	first_to = (*stack_from);
	if (*stack_from == NULL)
		return ;
	if ((*stack_to)->index == 0)
	{
		(*stack_to)->value = (*stack_from)->value;
		(*stack_to)->index = (*stack_from)->index;
		(*stack_to)->bin_index = (*stack_from)->bin_index;
		free((*stack_from));
		(*stack_from)= first_from;
		(*stack_from)->previous = NULL;
	}
	else
	{
		temp = (*stack_to);
		(*stack_to)->previous = first_to;
		(*stack_to) = first_to;
		(*stack_to)->next = temp;
		free((*stack_from));
		(*stack_from)= first_from;
		(*stack_from)->previous = NULL;
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	printf("pb\n");	
}