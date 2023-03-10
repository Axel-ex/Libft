/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:35:23 by axelc             #+#    #+#             */
/*   Updated: 2023/03/03 11:53:29 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*origin;

	origin = str;
	while (*str)
		str++;
	while (str != origin)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
