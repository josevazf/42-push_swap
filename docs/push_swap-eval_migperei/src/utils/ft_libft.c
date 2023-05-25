/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:11:52 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 13:42:57 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isdigit(int i)
{
	while ('0' <= i && i <= '9')
		return (1);
	return (0);
}

long	ft_atoi(const char *c)
{
	long	resultado;
	int		sinal;
	int		i;

	i = 0;
	sinal = 1;
	resultado = 0;
	while (c[i] == 32 || (c[i] >= 9 && c[i] <= 13))
	{
		i++;
	}
	if (c[i] == 43 || c[i] == 45)
	{
		if (c[i] == 45)
			sinal = -1;
		i++;
	}
	while (c[i] >= 48 && c[i] <= 57)
	{
		resultado *= 10;
		resultado += (c[i] - 48);
		i++;
	}
	return (resultado * sinal);
}
