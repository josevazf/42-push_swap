/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:48:38 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 14:42:48 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	string_input(long *lista_a, int *num_a, char **av, char **param_list)
{
	int	i;
	int	param_num;

	i = 0;
	param_num = 0;
	param_list = ft_split(av[1], ' ');
	while (param_list[i])
	{
		param_num++;
		i++;
	}
	num_a[0] = param_num;
	num_a[1] = num_a[0];
	i = 0;
	while (i < num_a[0])
	{
		lista_a[i] = ft_atoi(param_list[i]);
		i++;
	}
	free_string(param_list);
	free(param_list);
	return (0);
}

int	standard_input(long *lista_a, int *num_a, char **av)
{
	int	i;

	i = 0;
	while (i < num_a[1])
	{
		if (ver_numeros(av[i + 1]) == 1)
			lista_a[i] = ft_atoi(av[i + 1]);
		else
		{
			write(STDERR_FILENO, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	sep_param(long *lista_a, int *num_a, char **av)
{
	char	**param_list;

	param_list = NULL;
	if (num_a[0] == 1)
	{
		if (string_input(lista_a, num_a, av, param_list) == -1)
			return (-1);
	}
	else
	{
		if (standard_input(lista_a, num_a, av) == -1)
			return (-1);
	}
	if (param_repet(lista_a, num_a[1]) == -1)
		return (-1);
	if (ver_limites(lista_a, num_a[1]) == -1)
		return (-1);
	return (0);
}

int	ver_numeros(char *param_num)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (param_num[i])
	{
		if (param_num[i] == '-' || param_num[i] == '+')
		{
			if (param_num[i] == 45)
				minus++;
		}
		else if (ft_isdigit(param_num[i]) == 0)
			return (0);
		i++;
	}
	if (minus > 1)
		return (0);
	return (1);
}

int	param_repet(long *lista_a, int num_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < num_a)
	{
		j = 0;
		while (j < num_a)
		{
			if ((lista_a[i] == lista_a[j]) && (i != j))
			{
				write(STDERR_FILENO, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
