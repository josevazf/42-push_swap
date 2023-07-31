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
		printf("srt_index: %i \n", current->srt_index);
		printf("srt_index: %i \n", current->srt_bin_index);
		printf("\n");
        current = current->next;
    }
	printf("- - - - - - - - - - -\n");
}

t_stack	*create_node(int value, long srt_index)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->srt_index = srt_index;
	node->next = NULL;

	return (node);
}

void	stack_push_back(t_stack **begin_stack, int value, long srt_index)
{
	t_stack	*node;

	node = *begin_stack;
	if (node)
	{
		while(node->next)
			node = node->next;
		node->next = create_node(value, srt_index);
	}
	else
		*begin_stack = create_node(value, srt_index);	
}

// Creates linked list with values from argv and srt_index = 0
void	create_stack_a(char **argv, t_stack **stack_a)
{
	int 	i;
	int 	value;
	long 	srt_index;

	i = 0;
	srt_index = 0;
	while (argv[++i])
	{
		value = ft_atoi(argv[i]);
		if (i == 1)
			*stack_a = create_node(value, srt_index);
		else
			stack_push_back(stack_a, value, srt_index);
	}
}
