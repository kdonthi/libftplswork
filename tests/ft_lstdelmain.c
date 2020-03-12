/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:16:19 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/09 17:37:48 by kdonthi          ###   ########.fr       */
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
	printf("This is before we delete the list: \n");
	readlist(alst);
	ft_lstdel(alst, &delete);
	printf("This is after we delete the list: \n");
	readlist(alst);
}
