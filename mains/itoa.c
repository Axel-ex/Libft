/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:23:22 by axelc             #+#    #+#             */
/*   Updated: 2023/03/06 15:57:44 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("enter a nb \n");
		return (0);
	}

	int	nb = atoi(argv[1]);
	printf("%s", ft_itoa(nb));
	return (0);
}
