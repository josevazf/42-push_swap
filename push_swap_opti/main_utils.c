/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:35:27 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/08/08 17:19:56 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Displays error message and exits with standard error code 1
void	error_handle(void)
{
	write(2, "Error\n", 6);
	exit (1);
}



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
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

int	is_inverted(t_stack *stack_a)
{
	t_stack		*stack;

	stack = stack_a;
	while (stack->next)
	{
		if (stack->value < (stack->next->value))
			return (0);
		if (stack->next == NULL)
			return (1);
		stack = stack->next;
	}
	return (1);
}
