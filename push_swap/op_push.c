/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:38:59 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/08 10:45:52 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*tmp;

	if (*stack_from == NULL)
		return ;
	if (*stack_to != NULL)
		(*stack_to)->previous = *stack_from;
	if ((*stack_from)->next == NULL)
	{
		(*stack_from)->next = *stack_to;
		*stack_to = *stack_from;
		*stack_from = NULL;
		return ;
	}
	tmp = (*stack_from)->next;
	(*stack_from)->next = *stack_to;
	*stack_to = *stack_from;
	*stack_from = tmp;
	(*stack_from)->previous = NULL;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	ft_putstr("pb\n");
}
