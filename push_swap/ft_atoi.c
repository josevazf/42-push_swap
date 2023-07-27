/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:43:04 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/07/27 14:57:21 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_istdelimiter(char c)
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

	while (ft_istdelimiter(str[i]) && str[i])
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

int	ft_tobinary(long nbr)
{
	long posi;
	
	posi = 0;
	if (nbr < 2)
		posi = "01"[nbr];
	if (nbr >= 2)
	{	
		ft_tobinary(nbr / 2);
		ft_tobinary(nbr % 2);
	}
	return (posi);
}