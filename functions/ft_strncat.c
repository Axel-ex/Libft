/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:27:41 by axelc             #+#    #+#             */
/*   Updated: 2023/03/11 16:35:34 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int n)
{
	char	*origin;

	origin = dest;
	while (*dest)
		dest++;
	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (origin);
}
