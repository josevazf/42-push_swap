/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:27:19 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 13:42:50 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

void	free_stacks(long *lista_a, long *lista_b, int *num_a, int *num_b)
{
	free(lista_a);
	free(lista_b);
	free(num_a);
	free(num_b);
	exit(0);
}

void	free_and_exit_without_errors(int *num_a, int *num_b)
{
	free(num_a);
	free(num_b);
	write(STDERR_FILENO, "Error\n", 6);
	exit(0);
}

void	free_and_exit(int *num_a, int *num_b)
{
	free(num_a);
	free(num_b);
	exit(0);
}
