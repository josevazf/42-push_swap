/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:02:39 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/01 12:00:43 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*before_last;

	last = stack_last(*stack);
	before_last = last->previous;
	tmp = *stack;
	(*stack)->previous = last;
	*stack = last;
	(*stack)->next = tmp;
	(*stack)->previous = NULL;
	before_last->next = NULL;
}

void	rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
	printf("ra\n");
}

void	rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
	printf("rb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	printf("rr\n");
}
