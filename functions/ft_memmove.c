/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:31:52 by axelc             #+#    #+#             */
/*   Updated: 2023/03/12 09:42:09 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*origin;

	origin = dest;
	if (dest > src)
	{
		while (n--)
		{
			*((char *)dest + n) = *((char *)src + n);
		}
	}
	else
	{
		while (n--)
			*((char *)dest++) = *((char *)src++);
	}
	return (origin);
}
