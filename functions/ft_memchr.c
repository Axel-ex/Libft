/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:15:27 by axelc             #+#    #+#             */
/*   Updated: 2023/03/03 10:17:53 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *memblock, int ch, size_t n)
{
	while (n--)
	{
		if (*((char *)memblock) == ch)
			return (memblock);
		memblock++;
	}
	return (NULL);
}
