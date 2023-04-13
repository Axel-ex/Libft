/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:06:29 by axelc             #+#    #+#             */
/*   Updated: 2023/03/13 13:20:47 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	void	*ptr;

	ptr = malloc(element_size * element_count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, element_count);
	return (ptr);
}
