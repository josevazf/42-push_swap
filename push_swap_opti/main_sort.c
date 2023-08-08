/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:07 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/08 10:41:07 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_bit(t_stack *stack_a, int bit)
{
	t_stack		*stack;

	stack = stack_a;
	while (stack->next)
	{
		printf("%i\n", (stack->index >> bit) & 1);
		if (((stack->index >> bit) & 1) == 0)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	is_sorted(t_stack *stack_a)
{
	t_stack		*stack;

	stack = stack_a;
	while (stack->next)
	{
		if (stack->value > (stack->next->value))
			return (0);
		if (stack->next == NULL)
			return (1);
		stack = stack->next;
	}
	return (1);
}

void	small_sort(t_stack **stack_a)
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

void	med_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	int		max;
	int		min;

	max = max_index(*stack_a);
	min = min_index(*stack_a);
	if (stack_size == 4)
	{
		while ((*stack_a)->index != min)
			ra(stack_a);
		pb(stack_b, stack_a);
		small_sort(stack_a);
		pa(stack_a, stack_b);
	}
	else if (stack_size == 5)
	{
		while ((*stack_a)->index != max)
			ra(stack_a);
		pb(stack_b, stack_a);
		while ((*stack_a)->index != min)
			ra(stack_a);
		pb(stack_b, stack_a);
		small_sort(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
		rra(stack_a);
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
/* 	  		if (check_bit(*stack_a, bit) == 0)
				break; */
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
	// printf("stack_size: %i\n", stack_size);
	if (stack_size == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else if ((stack_size == 3) && !is_sorted(*stack_a))
		small_sort(stack_a);
	else if (stack_size <= 5 && !is_sorted(*stack_a))
		med_sort(stack_a, stack_b, stack_size);
	else if (stack_size > 5 && !is_sorted(*stack_a))
		big_sort(stack_a, stack_b, stack_size);
}
