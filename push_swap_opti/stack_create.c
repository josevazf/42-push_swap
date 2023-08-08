/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:14:50 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/27 11:59:03 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_last(t_stack *begin_stack)
{
	if (!begin_stack)
		return (NULL);
		
	while(begin_stack->next)
		begin_stack = begin_stack->next;
		
	return (begin_stack);
}

t_stack	*create_node(int value, long index, t_stack *previous)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = index;
	node->next = NULL;
	node->previous = previous;

	return (node);
}

void	stack_push_back(t_stack **begin_stack, int value, long index)
{
	t_stack	*node;

	node = *begin_stack;
	if (node)
	{
		while(node->next)
			node = node->next;
		node->next = create_node(value, index, node);
	}
	else
		*begin_stack = create_node(value, index, node);	
}

// Creates linked list with values from argv and srt_index = 0
t_stack	*create_stack_a(char **argv, t_stack **stack_a)
{
	int 	i;
	int 	value;
	long 	index;

	i = 0;
	index = 0;
	while (argv[++i])
	{
		value = ft_atoi(argv[i]);
		if (value < INT_MIN || value > INT_MAX)
			error_handle();
		if (i == 1)
			*stack_a = create_node(value, index, NULL);
		else
			stack_push_back(stack_a, value, index);
	}
	return (*stack_a);
}
