/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:43:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/27 15:55:14 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Checks for dups
int	is_duplicate(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (j != i && intcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// Checks if argument is 0
int	is_zero(char *argv)
{
	int i;

	i = 0;
	if (is_sign(argv[i]))
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

// Check if argument is a number and only has one sign
int	is_number(char *argv)
{
	int i;

	i = 0;
	if (is_sign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] != '\0' && !is_digit(argv[i]))
		return (0);
	return (1);	
}

//	Check if arguments are numbers without duplicates //
int check_args(char **argv, t_stack **stack_a)
{
	int i;
	int int_value;
	int count_zeros;

	count_zeros = 0;
	i = 0;
	while (argv[++i])
	{
		if (!is_number(argv[i]))
			return (0);
		int_value = ft_atoi(argv[i]);
		if (i == 1)
			*stack_a = ft_create_node(int_value);
		else
			ft_stack_push_back(stack_a, int_value);
		count_zeros += is_zero(argv[i]);
	}
	if (count_zeros > 1)
		return (0);
	if (is_duplicate(argv))
		return (0);
	return (1);
}
