/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:24:12 by axelc             #+#    #+#             */
/*   Updated: 2023/03/10 15:17:04 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c);

int	main(int argc, char **argv)
{
	char *str = argv[1];
	char **split = ft_strsplit(str, ' ');

	int i = 0;
	while (split[i] != 0)
	{
		printf("%s\n", split[i]);
		i++;
	}
}
