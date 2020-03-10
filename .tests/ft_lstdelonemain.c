/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelonemain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:56:03 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/09 15:32:56 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void delete(void* content, size_t content_size)
{
	free(content);
}
int main()
{
	t_list *a;
	char	*string = "hello";
	a = malloc(sizeof(t_list));
	a->content = (void*) string;
	a->content_size = 5;
	a->next = malloc(sizeof(t_list));
	t_list* temp = a->next;
	temp->next = NULL;
	printf("Content before: %s\n", (char*)a->content);
	ft_lstdelone(&a, &delete);
	printf("Content after: %s", (char*)a->content);
}
