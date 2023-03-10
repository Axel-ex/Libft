/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:57:58 by axelc             #+#    #+#             */
/*   Updated: 2023/03/06 13:00:03 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("enter a str");
		return (0);
	}
	char	*s1;

	s1 = argv[1];
	printf("%s", ft_strtrim(s1));
	return (0);
}
