/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:26:51 by axelc             #+#    #+#             */
/*   Updated: 2023/03/13 10:29:17 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	nb = ft_atoi(argv[1]);
	int nb2 = atoi(argv[2]);
	printf("mine: %d\n", nb);
	printf("original: %d\n", nb2);
	return (0);
}
