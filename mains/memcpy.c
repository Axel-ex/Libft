/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:56:30 by axelc             #+#    #+#             */
/*   Updated: 2023/03/28 13:42:50 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("enter a string to copy");
		return (0);
	}
	char	*src;
	char	dest[50];
	char	dest2[50];
	size_t	n;

	src = argv[1];
	n = sizeof(char) * 5;
	printf("My version: Copy the first %ld bytes of the string %s: %s\n", n, src, (char *)ft_memcpy(dest, src, 5));
	printf("original version: Copy the first %ld bytes of the string %s: %s\n", n, src, (char *)memcpy(dest2, src, 5));
	printf("Overlapping interval: Copy the first %ld bytes of the string %s in the 3thd position of str: %s\n", n, src, (char *)memcpy(src + 3, src, 5));
	return (0);
}
