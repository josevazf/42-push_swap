/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:07 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/14 09:14:17 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **stack_a)
{
	int		max;

	if (is_sorted(*stack_a))
		return ;
	max = max_index(*stack_a);
	if ((*stack_a)->index == max)
		ra(stack_a);
	else if ((*stack_a)->next->index == max)
		rra(stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int		min;

	min = min_index(*stack_a);
	while ((*stack_a)->index != min)
		ra(stack_a);
	pb(stack_b, stack_a);
	if (!is_sorted(*stack_a))
		sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int		max;
	int		min;

	max = max_index(*stack_a);
	min = min_index(*stack_a);
	while (((*stack_a)->index != min) && ((*stack_a)->index != max))
		ra(stack_a);
	pb(stack_b, stack_a);
	while (((*stack_a)->index != min) && ((*stack_a)->index != max))
		ra(stack_a);
	pb(stack_b, stack_a);
	if (!is_sorted(*stack_a))
		sort_3(stack_a);
	if ((*stack_b)->index == max)
	{
		pa(stack_a, stack_b);
		ra(stack_a);
		pa(stack_a, stack_b);
	}
	else if ((*stack_b)->index == min)
	{
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
		ra(stack_a);
	}
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	int		bit;
	int		size;	

	bit = 0;
	while (!is_sorted(*stack_a))
	{
		size = stack_size;
		while (size--)
		{
			if (((((*stack_a)->index) >> bit) & 1) == 0)
				pb(stack_b, stack_a);
			else
				ra(stack_a);
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		bit++;
	}
}

void	main_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else if (stack_size == 3 && !is_sorted(*stack_a))
		sort_3(stack_a);
	else if (stack_size == 4 && !is_sorted(*stack_a))
		sort_4(stack_a, stack_b);
	else if (stack_size == 5 && !is_sorted(*stack_a))
		sort_5(stack_a, stack_b);
	else if (stack_size > 5 && !is_sorted(*stack_a))
		big_sort(stack_a, stack_b, stack_size);
}
