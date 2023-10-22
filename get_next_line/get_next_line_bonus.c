/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:48:02 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/10 11:01:14 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*extractline(char *stash)
{
	char	*line;
	int		i;

	if (!stash || stash[0] == '\0')
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = (char *)malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line [i] = '\0';
	return (line);
}

char	*cleanstash(char *stash)
{
	char	*new_stash;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\0')
	{
		free(stash);
		return (NULL);
	}
	i++;
	new_stash = (char *)malloc(sizeof(char) * (ft_slen(stash) - i + 1));
	if (!new_stash)
		return (0);
	while (stash[i + j])
	{
		new_stash[j] = stash[i + j];
		j++;
	}
	new_stash[j] = '\0';
	free (stash);
	return (new_stash);
}

char	*read_file(int fd, char *buf, char *stash)
{
	int	bytes;

	bytes = 1;
	while (bytes != 0 && !(ft_strchr(stash, '\n')))
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buf);
			if (stash)
				free(stash);
			return (NULL);
		}
		buf[bytes] = '\0';
		stash = ft_strjoin(stash, buf);
	}
	free(buf);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[FOPEN_MAX];
	char		*buf;

	if (fd < 0 || BUFFER_SIZE == 0 || fd > FOPEN_MAX)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	stash[fd] = read_file(fd, buf, stash[fd]);
	buf = extractline(stash[fd]);
	if (stash[fd])
		stash[fd] = cleanstash(stash[fd]);
	return (buf);
}
