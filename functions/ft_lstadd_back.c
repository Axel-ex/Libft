/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:45:17 by axelc             #+#    #+#             */
/*   Updated: 2023/03/14 14:34:50 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	new->next = NULL;
}
