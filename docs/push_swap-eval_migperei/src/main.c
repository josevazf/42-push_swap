/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:23:09 by prossi            #+#    #+#             */
/*   Updated: 2023/04/19 16:56:59 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ver_param(int ac, char **av, int *num_a, int *num_b)
{
	int	i;
	int	j;

	if (ac < 2)
		free_and_exit(num_a, num_b);
	i = 1;
	while (i < ac)
	{
		if ((av[i][ft_strlen(av[i]) - 1] == ' ') || (av[i][0] == ' '))
			free_and_exit_without_errors(num_a, num_b);
		j = 0;
		while (j < ft_strlen(av[i]))
		{
			if (((av[i][j] < '0') || (av[i][j] > '9')) && (av[i][j] != ' '))
			{
				if (av[i][j] != '-')
					free_and_exit_without_errors(num_a, num_b);
			}
			if ((av[i][j] == 32) && (av[i][j + 1] == 32))
				free_and_exit_without_errors(num_a, num_b);
			j++;
		}
		i++;
	}
}

void	define_numeros(int *num_a, int *num_b, int ac)
{
	num_a[0] = ac - 1;
	num_a[1] = num_a[0];
	*num_b = 0;
}

int	main(int ac, char **av)
{
	long	*lista_a;
	long	*lista_b;
	int		*num_a;
	int		*num_b;

	num_a = (int *)malloc(2 * sizeof(int));
	num_b = (int *)malloc(sizeof(int));
	ver_param(ac, av, num_a, num_b);
	define_numeros(num_a, num_b, ac);
	lista_a = (long *)malloc(sizeof(long) * lista_tamanho(ac, av));
	lista_b = (long *)malloc(sizeof(long) * lista_tamanho(ac, av));
	if ((sep_param(lista_a, num_a, av) == -1) || \
		(lista_ord(lista_a, num_a) == 0))
		free_stacks(lista_a, lista_b, num_a, num_b);
	if ((num_a[1] == 2) && (lista_a[0] > lista_a[1]))
		ra(lista_a, num_a);
	else if (num_a[1] == 3)
		sort_3_numbers(lista_a, num_a);
	else if (num_a[1] == 5)
		sort_5_numbers(lista_a, lista_b, num_a, num_b);
	else
		sort_oth_numbers(lista_a, lista_b, num_a, num_b);
	free_stacks(lista_a, lista_b, num_a, num_b);
	return (0);
}
