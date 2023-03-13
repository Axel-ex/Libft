/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:29:52 by axelc             #+#    #+#             */
/*   Updated: 2023/03/13 11:17:19 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(const char *s, unsigned int start, size_t size);

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("1st arg: str\n2nd arg star\n3d arg size\n");
		return (0);
	}
	char	*str = argv[1];
	int		start = atoi(argv[2]);
	int		size = atoi(argv[3]);
	printf("%s", ft_substr(str, start, size));
	return (0);
}
