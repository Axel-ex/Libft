/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:10:41 by axelc             #+#    #+#             */
/*   Updated: 2023/03/14 15:43:09 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*new;
	t_list	*head;
	char	*str = "salut";
	char	*str1 = "les cocos et";
	char	*str2 = "les amis";

	head = ft_lstnew(str);
	new = ft_lstnew(str1);
	ft_lstadd_back(&head, new);
	ft_lstadd_back(&new, ft_lstnew(str2));
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	return (0);
}
