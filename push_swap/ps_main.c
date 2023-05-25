/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:52:40 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/25 12:36:06 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	//t_stack	*a;
	//t_stack	*b;
	char	**input;
	int		i;

	//a = NULL;
	//b = NULL;
	i = -1;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return(1);
	else if (argc == 2)
		input = ft_split(argv[1], ' ');
	
}
