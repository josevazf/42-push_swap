/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:11:49 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 16:55:31 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	first_stack(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	if (lista_b[0] < lista_a[0])
		pa(lista_a, lista_b, num_a, num_b);
	else if ((lista_b[0] > lista_a[0]) && (lista_b[0] < lista_a[1]))
	{
		ra(lista_a, num_a);
		pa(lista_a, lista_b, num_a, num_b);
		rra(lista_a, num_a);
	}
	else if ((lista_b[0] > lista_a[1]) && (lista_b[0] < lista_a[2]))
	{
		rra(lista_a, num_a);
		pa(lista_a, lista_b, num_a, num_b);
		rra(lista_a, num_a);
		rra(lista_a, num_a);
	}
	else if (lista_b[0] > lista_a[2])
	{
		pa(lista_a, lista_b, num_a, num_b);
		ra(lista_a, num_a);
	}
}

void	second_stack(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	if (lista_b[0] < lista_a[0])
		pa(lista_a, lista_b, num_a, num_b);
	else if ((lista_b[0] > lista_a[0]) && (lista_b[0] < lista_a[1]))
	{
		ra(lista_a, num_a);
		pa(lista_a, lista_b, num_a, num_b);
		rra(lista_a, num_a);
	}
	else if ((lista_b[0] > lista_a[1]) && (lista_b[0] < lista_a[2]))
	{
		ra(lista_a, num_a);
		pa(lista_a, lista_b, num_a, num_b);
		sa(lista_a, num_a);
		rra(lista_a, num_a);
	}
	else if ((lista_b[0] > lista_a[2]) && (lista_b[0] < lista_a[3]))
	{
		rra(lista_a, num_a);
		pa(lista_a, lista_b, num_a, num_b);
		rot_st_radix(lista_a, num_a);
	}
	else if (lista_b[0] > lista_a[3])
		parameters(lista_a, lista_b, num_a, num_b);
}

void	sort_3_numbers(long *lista_a, int *num_a)
{
	if ((lista_a[0] > lista_a[1]) && (lista_a[1] < \
		lista_a[2]) && (lista_a[0] < lista_a[2]))
		sa(lista_a, num_a);
	if ((lista_a[0] > lista_a[1]) && (lista_a[1] > \
		lista_a[2]) && (lista_a[0] > lista_a[2]))
	{
		sa(lista_a, num_a);
		rra(lista_a, num_a);
	}
	if ((lista_a[0] > lista_a[1]) && (lista_a[1] < \
		lista_a[2]) && (lista_a[0] > lista_a[2]))
		ra(lista_a, num_a);
	if ((lista_a[0] < lista_a[1]) && (lista_a[1] > \
		lista_a[2]) && (lista_a[0] < lista_a[2]))
	{
		sa(lista_a, num_a);
		ra(lista_a, num_a);
	}
	if ((lista_a[0] < lista_a[1]) && (lista_a[1] > \
		lista_a[2]) && (lista_a[0] > lista_a[2]))
		rra(lista_a, num_a);
}

void	sort_5_numbers(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	pb(lista_a, lista_b, num_a, num_b);
	pb(lista_a, lista_b, num_a, num_b);
	sort_3_numbers(lista_a, num_a);
	while (*num_b != 0)
	{
		if (num_a[1] == 3)
			first_stack(lista_a, lista_b, num_a, num_b);
		else if (num_a[1] == 4)
			second_stack(lista_a, lista_b, num_a, num_b);
	}
}
