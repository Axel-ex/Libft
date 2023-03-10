/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:26:21 by axelc             #+#    #+#             */
/*   Updated: 2023/03/01 17:02:26 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
