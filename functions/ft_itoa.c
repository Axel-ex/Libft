/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:11:01 by axelc             #+#    #+#             */
/*   Updated: 2023/03/13 13:03:28 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
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
		return ("0");
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		res[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (res);
}
