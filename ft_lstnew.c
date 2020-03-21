/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:08:19 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/20 18:37:41 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
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
