/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:07:11 by axel              #+#    #+#             */
/*   Updated: 2023/03/28 15:01:20 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char const *set)
{
	char	*cpy;
	char	*origin;
	int		size;

	size = 0;
	while (*s1 && ft_isset(*s1, set) == 1)
		s1++;
	origin = s1;
	while (*s1)
	{
		size++;
		s1++;
	}
	s1--;
	while (ft_isset(*s1--, set) == 1)
		size--;
	s1 = origin;
	cpy = (char *)malloc(sizeof(*cpy) * size + 1);
	origin = cpy;
	while (size--)
		*cpy++ = *s1++;
	*cpy = '\0';
	return (origin);
}
