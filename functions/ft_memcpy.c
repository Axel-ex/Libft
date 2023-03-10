/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:35:35 by axelc             #+#    #+#             */
/*   Updated: 2023/03/02 13:57:37 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*origin_dest;

	if (!dest || !src)
		return (NULL);
	origin_dest = dest;
	while (n--)
		*((char *)dest++) = *((char *)src++);
	return (origin_dest);
}
