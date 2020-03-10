/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:08:19 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/06 16:15:56 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (content != NULL)
	{
		newnode->content = (void*)content;
		newnode->content_size = content_size;
	}
	else
	{
		newnode->content = NULL;
		newnode->content_size = 0;
	}
	newnode->next = NULL;
	return (newnode);
}
