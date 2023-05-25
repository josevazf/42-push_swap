/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:30:22 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/25 10:48:13 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_cntwrds(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

char	*ft_strposi(char const *s, char c, int pos)
{
	size_t	i;
	char	*subs;

	i = pos;
	while (s[i] != '\0' && s[i] != c)
		i++;
	subs = ft_substr(s, pos, (i - pos));
	return (subs);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*substr;
	size_t	i;

	i = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;

	i = 0;
	j = -1;
	out = malloc(sizeof(char *) * (ft_cntwrds(s, c) + 1));
	if (!out)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			out[++j] = ft_strposi(s, c, i);
			i = i + ft_strlen(out[j]);
		}
	}
	out[++j] = NULL;
	return (out);
}
