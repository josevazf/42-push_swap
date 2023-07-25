/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:38:06 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/25 12:37:05 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* is_correct_input:
*   Checks if the given arguments are all numbers, without duplicates.
*   Return: 1 if the arguments are valid, 0 if not.
*/
int check_values(char **argv)
{
	int i;
	int zeros_count;

	zeros_cout = 0;
	i = -1;
	while (argv[++i])
	{
		if (!is_number(argv[i]))
			return (0);
		zeros_count += is_zero(argv[i])
	}
	if (zeros_count > 1)
		return (0);
	if (check_doubles(argv))
		return (0);
	return (1);
}