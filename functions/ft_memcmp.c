/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:52:44 by axelc             #+#    #+#             */
/*   Updated: 2023/03/11 14:55:36 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	while (n)
	{
		if (*((unsigned char *)mem1) != *((unsigned char *)mem2))
			return (*((unsigned char *)mem1) - *((unsigned char *)mem2));
		mem1++;
		mem2++;
		n--;
	}
	return (0);
}
