/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:26:57 by axelc             #+#    #+#             */
/*   Updated: 2023/03/02 14:30:46 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t n)
{
	char	*origin;

	if (!dest || !src)
		return (NULL);
	origin = dest;
	while (n-- && *(char *)src != ch)
		*((char *)dest++) = *((char *)src++);
	return (origin);
}
