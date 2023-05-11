/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migperei <migperei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:37:02 by migperei          #+#    #+#             */
/*   Updated: 2023/04/19 13:43:06 by migperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	conta_palavras(const char *str, char c)
{
	int	i;
	int	count;
	int	registc;

	count = 0;
	registc = 1;
	i = 0;
	while (str && str[i] != '\0')
	{
		if (str[i] != c && registc)
		{
			count++;
			registc = 0;
		}
		else if (registc == 0 && str[i] == c)
			registc = 1;
		i++;
	}
	return (count);
}

static char	*palavras(const char *str, char c)
{
	int		l;
	int		i;
	char	*ptr;

	l = 0;
	while (str[l] != '\0' && str[l] != c)
		l++;
	ptr = (char *)malloc(sizeof(char) * (l + 1));
	if (!ptr)
		return (NULL);
	ptr[l] = '\0';
	i = 0;
	while (i < l)
		ptr[i++] = *str++;
	return (ptr);
}

char	**ft_split(const char *str, char c)
{
	char	**strings;
	int		i;
	int		cpalavras;

	i = 0;
	cpalavras = conta_palavras(str, c);
	strings = (char **)malloc(sizeof(char *) * (cpalavras + 1));
	if (!strings)
		return (NULL);
	while (i < cpalavras)
	{
		while (*str != '\0' && *str == c)
			str++;
		strings[i] = palavras(str, c);
		str += ft_strlen(strings[i++]);
	}
	strings[i] = NULL;
	return (strings);
}
