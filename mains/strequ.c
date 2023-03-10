/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:51:11 by axelc             #+#    #+#             */
/*   Updated: 2023/03/04 19:55:27 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strequ(char *s1, char *s2);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("enter 2 strings to compare\n");
		return (0);
	}

	char	*s1 = argv[1];
	char	*s2 = argv[2];

	printf("the result of the comparison of :%s: and :%s: is %d\n", s1, s2, ft_strequ(s1, s2));
	return (0);
}
