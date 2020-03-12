/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:49:06 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/11 16:44:17 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*headofnewlist;
	t_list	*tempnl;
	t_list	*tempol;
	long	counter;

	tempol = lst;
	counter = 0;
	while (tempol != NULL)
	{
		counter++;
		if (counter == 1)
		{
			headofnewlist = (*f)(tempol);
			tempnl = headofnewlist;
			tempol = tempol->next;
		}
		else
		{
			tempnl->next = (*f)(tempol);
			tempol = tempol->next;
			tempnl = tempnl->next;
		}
	}
	tempnl->next = NULL;
	return (headofnewlist);
}
