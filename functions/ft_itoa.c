/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:11:01 by axelc             #+#    #+#             */
/*   Updated: 2023/03/06 16:00:36 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while (nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	nb;

	nb = n;
	i = count_nb(nb);
	res = (char *)malloc(sizeof(*res) * (count_nb(nb) + 1));
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (nb == 0)
		*res = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		res[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (res);
}
