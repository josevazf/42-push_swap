/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:12:02 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 16:39:16 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sw_st_1st(long *copy, long *cpy_sw_stack_a, long *lista_a, int *num_a)
{
	int	i;

	i = 0;
	while (i < num_a[0])
	{
		copy[i] = lista_a[i];
		cpy_sw_stack_a[i] = lista_a[i];
		i++;
	}
}

void	sort_a_section_of_the_stack(long *copy, int *l_size)
{
	long	i;
	long	j;
	long	temporary;

	i = 0;
	j = 0;
	while (i < l_size[0])
	{
		j = i + 1;
		while (j < l_size[0])
		{
			if (copy[i] > copy[j])
			{
				temporary = copy[i];
				copy[i] = copy[j];
				copy[j] = temporary;
			}
			j++;
		}
		i++;
	}
}

void	sw_st_2st(long *copy, long *cpy_sw_stack_a, long *lista_a, int *num_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < num_a[1])
	{
		j = 0;
		while (j < num_a[0])
		{
			if (cpy_sw_stack_a[i] == copy[j])
					lista_a[i] = j;
			j++;
		}
		i++;
	}
}

void	sw_st_3st(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	int	maximum_number;
	int	maximum_bits;
	int	loop_through[2];

	maximum_number = num_a[1] - 1;
	maximum_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((maximum_number >> maximum_bits) != 0)
		++maximum_bits;
	while (loop_through[0] < maximum_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < num_a[0])
		{
			if (((lista_a[0] >> loop_through[0]) & 1) == 1)
				ra(lista_a, num_a);
			else
				pb(lista_a, lista_b, num_a, num_b);
			++loop_through[1];
		}
		while (*num_b != 0)
			pa(lista_a, lista_b, num_a, num_b);
		++loop_through[0];
	}
}

void	sort_oth_numbers(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	long	*copy;
	long	*cpy_sw_stack_a;

	copy = (long *)malloc(num_a[0] * sizeof(long));
	cpy_sw_stack_a = (long *)malloc(num_a[0] * sizeof(long));
	sw_st_1st(copy, cpy_sw_stack_a, lista_a, num_a);
	sort_a_section_of_the_stack(copy, num_a);
	sw_st_2st(copy, cpy_sw_stack_a, lista_a, num_a);
	free(copy);
	free(cpy_sw_stack_a);
	sw_st_3st(lista_a, lista_b, num_a, num_b);
}
