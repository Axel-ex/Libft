/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:54:06 by axelc             #+#    #+#             */
/*   Updated: 2023/03/03 11:01:15 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char str[] = "Salut ca va";
	char str2[] = "Salut ca va";
	printf("My version:%s\n", (char *)ft_memmove(str+2, str, sizeof(char) * 5));
	printf("original:%s\n", (char *)memmove(str2+2, str2, sizeof(char) * 5));
	return 0;
}
