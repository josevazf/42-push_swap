/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:56:16 by prossi            #+#    #+#             */
/*   Updated: 2023/04/19 13:42:35 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(long *stack_a, int *num_a)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (num_a[1] > 1)
	{
		temporary[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temporary[0];
	}
	free(temporary);
	write(1, "sa\n", 3);
}

void	sb(long *stack_b, int *num_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (*num_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "sb\n", 3);
}

void	ss(long *stack_a, long *stack_b, int *num_a, int *num_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (num_a[1] > 1)
	{
		temporary[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temporary[0];
	}
	if (*num_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "ss\n", 3);
}
