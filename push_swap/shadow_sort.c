/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shadow_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:44:45 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/31 09:05:59 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_min(t_stack *stack_a, int list_length)
{
	t_stack	*current_node;
	t_stack	*min_node;

	current_node = stack_a;
	while (current_node->srt_index)
		current_node = current_node->next;
	if (!current_node->next && current_node->srt_index)
		return (NULL);
	min_node = current_node;
	while (list_length--)
	{
		if (current_node->value < min_node->value && !current_node->srt_index)
			min_node = current_node;
		if (current_node->next)
			current_node = current_node->next;
	}
	return (min_node);
}

void	shadow_sort(t_stack **stack_a, int list_length)
{
	t_stack *min_node;
	int 	index_value;

	index_value = 1;
	while (index_value <= list_length)
	{
		min_node = get_min(*stack_a, list_length);
		min_node->srt_index = index_value;
		min_node->srt_bin_index = ft_itobi(index_value);
		index_value++;
	}
	print_stack(*stack_a);
}