/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:37:22 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/31 14:49:51 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int 	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->next->index;
	stack->next->index = stack->index;
	stack->index = tmp;
	tmp = stack->next->bin_index;
	stack->next->bin_index = stack->bin_index;
	stack->bin_index = tmp;
	tmp = stack->next->value;
	stack->next->value = stack->value;
	stack->value = tmp;
}

void	sa(t_stack **stack_a)
{
	swap(*stack_a);
	printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	swap(*stack_b);
	printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	printf("ss\n");	
}

