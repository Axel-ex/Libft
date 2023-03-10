/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:09:48 by axelc             #+#    #+#             */
/*   Updated: 2023/03/06 13:42:40 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		size;
	char	*trimed;
	char	*origin;

	start = 0;
	while (is_space(s[start]) == 1)
		start++;
	end = ft_strlen(s) - 1;
	while (is_space(s[end]) == 1)
		end--;
	size = end - start + 1;
	trimed = (char *)malloc(sizeof(*trimed) * (size + 1));
	origin = trimed;
	while (size--)
		*trimed++ = s[start++];
	*trimed = '\0';
	return (origin);
}
