/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:29:52 by axelc             #+#    #+#             */
/*   Updated: 2023/03/06 09:33:03 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(const char *s, unsigned int start, size_t size);

int main(void)
{
	char	*str = "this is a string";
	printf("%s", ft_strsub(str, 5, sizeof(char) * strlen(str)));
	return (0);
}
