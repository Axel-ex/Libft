/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:16:19 by axelc             #+#    #+#             */
/*   Updated: 2023/04/16 23:26:46 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t size)
{
	char	*sub;
	char	*origin;

	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(*sub) * (size + 1));
	if (!sub)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		*sub = '\0';
		return (sub);
	}
	origin = sub;
	while (size--)
		*sub++ = s[start++];
	*sub = '\0';
	return (origin);
}
