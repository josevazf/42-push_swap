/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shadow_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:44:45 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/08 10:39:07 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Gets min node
t_stack	*get_min(t_stack *stack_a, int list_length)
{
	t_stack	*current_node;
	t_stack	*min_node;

	current_node = stack_a;
	while (current_node->index)
		current_node = current_node->next;
	if (!current_node->next && current_node->index)
		return (NULL);
	min_node = current_node;
	while (list_length--)
	{
		if (current_node->value < min_node->value && !current_node->index)
			min_node = current_node;
		if (current_node->next)
			current_node = current_node->next;
	}
	return (min_node);
}

// Background insertion sort setting index 
void	shadow_sort(t_stack **stack_a, int list_length)
{
	t_stack		*min_node;
	int			index_value;

	index_value = 1;
	while (index_value <= list_length)
	{
		min_node = get_min(*stack_a, list_length);
		min_node->index = index_value;
		index_value++;
	}
}

// Gets max index value in the stack
int	max_index(t_stack *stack)
{
	int		index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

// Gets min index value in the stack
int	min_index(t_stack *stack)
{
	int		index;

	index = stack->index;
	while (stack)
	{
		if (stack->index < index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}
