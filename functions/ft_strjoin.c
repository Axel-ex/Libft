/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:38:05 by axelc             #+#    #+#             */
/*   Updated: 2023/03/13 11:45:48 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*origin;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(*res) * (size + 1));
	if (!res)
		return (NULL);
	origin = res;
	while (*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	*res = '\0';
	return (origin);
}

#include <stdio.h>
#include <stdlib.h>


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
