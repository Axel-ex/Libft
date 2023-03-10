/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:38:38 by axelc             #+#    #+#             */
/*   Updated: 2023/03/03 12:01:00 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Enter a str and a char to look for\n");
		return (0);
	}
	const char *str = argv[1];
	char	c = argv[2][0];
	printf("STRRCHR\n");
	printf("My version: position of the last occurence of the char %c in the string :%s:  --> %s\n", c, str, ft_strrchr(str, c));
	printf("Origin: position of the last occurence of the char %c in the string :%s:  --> %s\n", c, str, strrchr(str, c));
	printf("\n\n");
	printf("STRCHR\n");
	printf("My version: position of the last occurence of the char %c in the string :%s:  --> %s\n", c, str, ft_strchr(str, c));
	printf("Origin: position of the last occurence of the char %c in the string :%s:  --> %s\n", c, str, strchr(str, c));
	return (0);
}
