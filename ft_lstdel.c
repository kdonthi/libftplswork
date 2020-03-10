/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:20:57 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/09 17:36:27 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	while (*alst != NULL)
	{
		temp = *alst;
		if (temp->next)
		{
			while ((temp->next)->next != NULL)
				temp = temp->next;
			ft_lstdelone(&(temp->next), del);
		}
		else
			ft_lstdelone(alst, del);
	}
}
