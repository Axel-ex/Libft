/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:21:21 by axelc             #+#    #+#             */
/*   Updated: 2023/04/18 16:34:49 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *str)
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
