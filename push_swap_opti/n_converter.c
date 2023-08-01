/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_converter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:43:04 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/30 12:44:40 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isdelimiter(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int i = 0;
	int n = 0;
	int sign = 1;

	while (isdelimiter(str[i]) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - '0';
	return (n * sign);
}

int	ft_itobi(int nbr)
{
	int	n;
	int	i;

	n = 0;
	i = 1;
	while (nbr > 0)
	{
		n += (nbr % 2) * i;
		nbr = nbr / 2;
		i *= 10;
	}
	return (n);
}