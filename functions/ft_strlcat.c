/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:27:19 by axelc             #+#    #+#             */
/*   Updated: 2023/03/01 17:06:40 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t n)
{
	int		i;
	size_t	size_dest;
	size_t	size_src;
	size_t	length;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (n > size_dest)
		length = size_dest + size_src;
	else
		length = size_src + n;
	while (src[i] && i < n)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	return (length);
}
