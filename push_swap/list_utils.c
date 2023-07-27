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

void    ft_print_stack(t_stack *stack)
{
	t_stack *current;
	
	current = stack;
    while (current != NULL)
    {
        printf("%i -> ", (int)current->value);
        current = current->next;
    }
	printf("\n");
}

t_stack	*ft_create_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;

	return (node);
}

void	ft_stack_push_back(t_stack **begin_stack, int value)
{
	t_stack	*back;

	back = *begin_stack;
	if (back)
	{
		while(back->next)
			back = back->next;
		back->next = ft_create_node(value);
	}
	else
		*begin_stack = ft_create_node(value);	
}
