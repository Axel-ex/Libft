/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:21:21 by axelc             #+#    #+#             */
/*   Updated: 2023/03/11 16:16:28 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*cpy;
	char	*origin;

	cpy = (char *)malloc(sizeof(*cpy) * (ft_strlen(str) + 1));
	if (!cpy)
		return (0);
	origin = cpy;
	while (*str)
		*cpy++ = *str++;
	*cpy = '\0';
	return (origin);
}
