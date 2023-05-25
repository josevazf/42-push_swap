/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:56:01 by prossi            #+#    #+#             */
/*   Updated: 2023/04/19 13:42:15 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	int	i;

	(num_a[1])++;
	i = num_a[1] - 1;
	while (i > 0)
	{
		lista_a[i] = lista_a[i - 1];
		i--;
	}
	lista_a[0] = lista_b[0];
	i = 0;
	while (i < *num_b)
	{
		lista_b[i] = lista_b[i + 1];
		i++;
	}
	(*num_b)--;
	if (*num_b == 0)
		lista_b = NULL;
	write(1, "pa\n", 3);
}

void	pb(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	int	i;

	(*num_b)++;
	i = *num_b - 1;
	while (i > 0)
	{
		lista_b[i] = lista_b[i - 1];
		i--;
	}
	lista_b[0] = lista_a[0];
	i = 0;
	while (i < num_a[1])
	{
		lista_a[i] = lista_a[i + 1];
		i++;
	}
	(num_a[1])--;
	if (num_a[1] == 0)
		lista_a = NULL;
	write(1, "pb\n", 3);
}
