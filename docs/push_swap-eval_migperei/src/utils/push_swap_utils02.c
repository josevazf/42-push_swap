/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils02.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:48:38 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 14:43:04 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	lista_tamanho(int ac, char **av)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ')
				size++;
			i++;
		}
	}
	else
		size = ac - 1;
	return (size);
}

void	ft_reallocation(long *pointer, int startsize, int newsize)
{
	long	*temporary;
	int		i;

	i = 0;
	if ((pointer != NULL) && (startsize < newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < startsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
	else if ((pointer != NULL) && (startsize > newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < newsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
}

void	parameters(long *lista_a, long *stack_b, int *num_a, int *par_stack_b)
{
	pa(lista_a, stack_b, num_a, par_stack_b);
	ra(lista_a, num_a);
}

int	ver_limites(long *lista_a, int num_a)
{
	int	i;

	i = 0;
	while (i < num_a)
	{
		if ((lista_a[i] > 2147483647 || lista_a[i] < -2147483648))
		{
			write(STDERR_FILENO, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	lista_ord(long *lista_a, int *num_a)
{
	long	max;
	int		i;
	int		j;

	i = 1;
	j = 0;
	max = lista_a[0];
	while (i < num_a[1])
	{
		if (lista_a[i] > max)
		{
			max = lista_a[i];
			j++;
		}
		i++;
	}
	if (j == num_a[1] - 1)
		return (0);
	return (-1);
}
