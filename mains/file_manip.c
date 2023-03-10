/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:28:07 by axelc             #+#    #+#             */
/*   Updated: 2023/03/10 15:00:41 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
int		ft_strlen(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("enter a file_name and a str to print inside\n");
		return(0);
	}

	int	fd;
	char	*file_name = argv[1];
	char	*str = argv[2];

	fd = open(file_name, O_APPEND | O_RDWR | O_CREAT);
	ft_putstr_fd(str, fd);
	ft_putnbr_fd(34, fd);
	return (0);
}
