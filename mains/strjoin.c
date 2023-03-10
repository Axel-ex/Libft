/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:46:57 by axelc             #+#    #+#             */
/*   Updated: 2023/03/06 09:51:38 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Enter strings to join\n");
		return (0);
	}

	char *s1 = argv[1];
	char *s2 = argv[2];
	printf("result of joining the str :%s: and :%s: --> %s",s1, s2, ft_strjoin(s1, s2));
}
