/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:02:39 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/01 10:27:59 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack *tmp;

	if ((*stack)->next == NULL)
		return ;
		
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	printf("rr\n");
}
