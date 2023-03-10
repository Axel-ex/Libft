/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:16:19 by axelc             #+#    #+#             */
/*   Updated: 2023/03/06 09:35:33 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t size)
{
	char	*sub;
	char	*origin;
	int		sub_size;

	sub_size = size - start;
	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(*sub) * (sub_size + 1));
	if (!sub)
		return (NULL);
	origin = sub;
	while (sub_size--)
		*sub++ = s[start++];
	*sub = '\0';
	return (origin);
}
