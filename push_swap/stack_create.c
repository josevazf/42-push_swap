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

void    print_stack(t_stack *stack)
{
	t_stack *current;
	
	current = stack;
    while (current != NULL)
    {
        printf("value: %i \n", current->value);
		printf("index: %i \n", current->index);
		printf("index: %i \n", current->bin_index);
		printf("\n");
        current = current->next;
    }
	printf("- - - - - - - - - - -\n");
}

t_stack	*create_node(int value, long index)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = index;
	node->next = NULL;

	return (node);
}

void	stack_push_back(t_stack **begin_stack, int value, long index)
{
	t_stack	*back;

	back = *begin_stack;
	if (back)
	{
		while(back->next)
			back = back->next;
		back->next = create_node(value, index);
	}
	else
		*begin_stack = create_node(value, index);	
}

// Creates linked list with values from argv and index = 0
void	create_stack_a(char **argv, t_stack **stack_a)
{
	int 	i;
	int 	value;
	long 	index;

	i = 0;
	index = 0;
	while (argv[++i])
	{
		value = ft_atoi(argv[i]);
		if (i == 1)
			*stack_a = create_node(value, index);
		else
			stack_push_back(stack_a, value, index);
	}
}
