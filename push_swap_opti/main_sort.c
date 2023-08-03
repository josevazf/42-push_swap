/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:07 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/03 11:55:39 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_bit(t_stack *stack_a, int bit)
{
	t_stack *stack;

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

int	highest_index(t_stack *stack)
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

int	lowest_index(t_stack *stack)
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

int		is_sorted(t_stack *stack)
{
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
	int		highest;

	if (is_sorted(*stack_a))
		return ;
	highest = highest_index(*stack_a);
	if ((*stack_a)->index == highest)
		ra(stack_a);
	else if ((*stack_a)->next->index == highest)
		rra(stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	med_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	int		highest;

	if (is_sorted(*stack_a))
		return ;
	if (stack_size == 4)
		pb(stack_b, stack_a);
	else if
		pb(stack_b);
		
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	int 	bit;
	int 	size;
	//int 	trigger;
	
	bit = 0;
	//trigger = 0;
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
	if (stack_size == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else if ((stack_size == 3) && !is_sorted(*stack_a))
		small_sort(stack_a);
	else if (stack_size <= 5 && !is_sorted(*stack_a))
		med_sort(stack_a, stack_b, stack_size);
	else if (stack_size > 5 && !is_sorted(*stack_a))
		big_sort(stack_a, stack_b, stack_size);
}