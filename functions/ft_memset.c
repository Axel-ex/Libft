/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:00:24 by axelc             #+#    #+#             */
/*   Updated: 2023/03/02 14:02:53 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *str, int c, size_t n)
{
	void	*origin;

	origin = str;
	while (n--)
		*((char *)str++) = c;
	return (origin);
}
