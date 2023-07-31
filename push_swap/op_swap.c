/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:37:22 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/31 12:34:53 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int 	tmp;

	tmp = stack->next->index;
	stack->next->index = stack->index;
	stack->index = tmp;
	tmp = stack->next->bin_index;
	stack->next->bin_index = stack->bin_index;
	stack->bin_index = tmp;
	tmp = stack->next->value;
	stack->next->value = stack->value;
	stack->value = tmp;
}