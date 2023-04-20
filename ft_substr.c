/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:16:19 by axelc             #+#    #+#             */
/*   Updated: 2023/04/20 18:13:26 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*origin;

	if (!s)
		return (NULL);
	if (len > (unsigned int)ft_strlen(s))
		len = ft_strlen(s);
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(*sub));
		if (!sub)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	sub = (char *)malloc(sizeof(*sub) * (len + 1));
	if (!sub)
		return (NULL);
	origin = sub;
	while (s[start] && len--)
		*sub++ = s[start++];
	*sub = '\0';
	return (origin);
}
