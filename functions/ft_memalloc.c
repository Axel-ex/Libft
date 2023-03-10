/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:57:13 by axelc             #+#    #+#             */
/*   Updated: 2023/03/03 10:13:25 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t n)
{
	void	*memblock;

	memblock = malloc(sizeof(*memblock) * n);
	if (!memblock)
		return (NULL);
	ft_bzero(memblock, n);
	return (memblock);
}
