/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:52:44 by axelc             #+#    #+#             */
/*   Updated: 2023/03/03 17:59:10 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	while (n--)
	{
		if (*((char *)mem1) != *((char *)mem2))
			return (*((char *)mem1) - *((char *)mem2));
		mem1++;
		mem2++;
	}
	return (0);
}
