/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelchab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:08:22 by axelchab          #+#    #+#             */
/*   Updated: 2023/05/10 10:50:09 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*extractline(char *stash);
char	*cleanstash(char *stash);
char	*ft_strjoin(char *stash, char *buf);
char	*ft_realjoin(char *stash, char *buf, char *join);
char	*ft_strchr(char *s, char c);
int		ft_slen(char *s);

#endif
