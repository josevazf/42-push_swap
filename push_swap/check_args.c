/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:43:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/26 14:43:16 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	is_number(char *argv)
{
	int i;

	i = 0;
	if (is_sign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] != '/0' && !is_digit(argv[i]))
		return (0);
	return (1);	
}

//	Check if arguments are numbers without duplicates //
int check_args(char **argv)
{
	int i;
	int count_zeros;

	count_zeros = 0;
	i = 0;
	while (argv[++i])
	{
		if (!is_number(argv[i]))
			return (0);
		count_zeros += is_zero(argv[i]);
	}
	if (count_zeros > 1)
		return (0);
	if (is_duplicate(argv))
		return (0);
	return (1);
}