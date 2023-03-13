/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:54:00 by axelc             #+#    #+#             */
/*   Updated: 2023/03/13 10:51:58 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c, char delim)
{
	if (c == delim)
		return (1);
	return (0);
}

static int	ft_countwords(char const *s, char delim)
{
	int	counts;
	int	i;

	counts = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0)
		{
			if (ft_isspace(s[i], delim) == 0)
				counts++;
		}
		if (ft_isspace(s[i], delim) == 0 && ft_isspace(s[i - 1], delim) == 1)
			counts++;
		i++;
	}
	return (counts);
}

int	ft_wordlen(char const *s, char delim)
{
	int	i;

	i = 0;
	while (s[i] && ft_isspace(s[i], delim) != 1)
		i++;
	return (i);
}

char	*ft_worddup(char const *s, char delim)
{
	char	*dup;
	char	*origin;
	int		size;

	size = ft_wordlen(s, delim);
	dup = (char *)malloc(sizeof(*dup) * (size + 1));
	if (!dup)
		return (0);
	origin = dup;
	while (size--)
		*dup++ = *s++;
	*dup = '\0';
	return (origin);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	i = 0;
	split = (char **)malloc(sizeof(*split) * (ft_countwords(s, c) +1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && ft_isspace(*s, c) == 1)
			s++;
		if (*s)
		{
			split[i] = ft_worddup(s, c);
			i++;
		}
		while (*s && ft_isspace(*s, c) == 0)
			s++;
	}
	split[i] = 0;
	return (split);
}
