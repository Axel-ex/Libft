/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:21:45 by axelc             #+#    #+#             */
/*   Updated: 2023/03/02 22:46:51 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *memblock, int ch, size_t n);

int	main(void)
{
	char	array[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
	void	*found;

	found = ft_memchr(array, 40, sizeof(int) * 9);
	printf("40 is %s\n", (found != NULL ? "found" : "not found"));
	if (found)
		printf("found points at the position %d\n", *((char *)found));
	return (0);
}
