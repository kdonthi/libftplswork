/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:16:19 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/09 18:01:59 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void readlist(t_list **aptr)
{
	t_list *temp;

	temp = *aptr;
	while (temp != NULL)
	{
		printf("%s\n", (char*)temp->content);
		temp = temp->next;
	}
}
void delete(void *content, size_t content_size)
{
	free(content);
}
int main()
{
	t_list	**alst;
	t_list	*temp;


	alst = malloc(sizeof(t_list*) * 1);
	*alst = malloc(sizeof(t_list));
	temp = *alst;
	temp->content = (char*)malloc(sizeof(char) * 1);
	*((char*)(temp->content)) = '1';
	temp->next = malloc(sizeof(t_list));
	temp = temp->next;
	temp->content = (void*)malloc(sizeof(char) * 1);
	*((char*)(temp->content)) = '2';
	temp->next = malloc(sizeof(t_list));
	temp = temp->next;
	temp->content = (void*)malloc(sizeof(char) * 1);
	*((char*)(temp->content)) = '3';
	temp->next = NULL;
	printf("This is before we add the element: \n");
	readlist(alst);
	t_list	*new = (void*)malloc(sizeof(t_list));
	printf("%s",(char*)new->content);
	new->content = (void*)malloc(sizeof(char));
	*((char*)(new->content)) = '4';
	ft_lstadd(alst, new);
	printf("This is after we add the element: \n");
	readlist(alst);
	return (0);
}
