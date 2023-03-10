/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:08:48 by axelc             #+#    #+#             */
/*   Updated: 2023/03/02 14:41:39 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <strings.h>

void	ft_bzero(void *str, size_t n);

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	char	*str2 = argv[2];
	
	printf("MINE---------\n");
	printf("la string %s\n", str);
	ft_bzero(str, sizeof(char) * 5);
	printf("was set to 0 on the first 5bytes %s\n", str);
	printf("and the rest is: %s\n\n", str + 5);

	printf("ORIGINAL---------\n");
	printf("la string %s\n", str2);
	bzero(str2, sizeof(char) * 5);
	printf("was set to 0 on the first 5bytes %s\n", str2);
	printf("and the rest is: %s", str2 + 5);
	return (0);

}
