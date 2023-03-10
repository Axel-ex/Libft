/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:19:01 by axelc             #+#    #+#             */
/*   Updated: 2023/03/03 11:22:49 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str && n--)
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (str);
			i++;
		}
		str++;
	}
	return (NULL);
}
