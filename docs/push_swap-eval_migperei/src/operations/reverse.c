/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:56:10 by prossi            #+#    #+#             */
/*   Updated: 2023/04/19 13:42:21 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(long *stack_a, int *num_a)
{
	int		i;
	long	*temporary;

	i = num_a[1] - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_a[num_a[1] - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *temporary;
	free(temporary);
	write(1, "rra\n", 4);
}

void	rrb(long *stack_b, int *num_b)
{
	int		i;
	long	*temporary;

	i = *num_b - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_b[*num_b - 1];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = *temporary;
	free(temporary);
	write(1, "rrb\n", 4);
}

void	rrr(long *stack_a, long *stack_b, int *num_a, int *num_b)
{
	int		i;
	long	*temporary;

	i = num_b[1] - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_a[num_a[1] - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *temporary;
	i = 0;
	*temporary = stack_b[0];
	while (i < *num_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*num_b - 1] = *temporary;
	free(temporary);
	write(1, "rrr\n", 4);
}
