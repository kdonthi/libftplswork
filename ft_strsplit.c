/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:50:13 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/06 19:27:23 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		appendnode(t_string **ptonode, t_string **ptotemp, long wc, long wl)
{
	*ptonode = malloc(sizeof(t_string));
	(*ptonode)->wordnum = wc;
	(*ptonode)->wordlen = wl;
	(*ptonode)->next = NULL;
	*ptotemp = *ptonode;
}

t_string	*create_list(char const *s, char c)
{
	t_word		a;

	a.wordcounter = 0;
	a.index = 0;
	while (1)
	{
		while (s[a.index] == c)
			a.index++;
		a.wordlen = 0;
		while (s[a.index] != '\0' && s[a.index] != c)
		{
			a.index++;
			a.wordlen++;
		}
		if (a.wordlen > 0)
		{
			a.wordcounter++;
			if (a.wordcounter == 1)
				appendnode(&(a.head), &(a.temp), a.wordcounter, a.wordlen);
			else
				appendnode(&((a.temp)->next), &(a.temp), a.wordcounter, a.wordlen);
		}
		else
			return (a.head);
	}
}

char		**ft_strsplit(char const *s, char c)
{
	t_string	*list;
	t_string	*temp;
	long		index;
	char		**arrayofstrings;
	int			word;
	int			j;
	int			wordnum;

	list = create_list(s, c);
	temp = list;
	word = 0;
	index = 0;
	while (temp->next != NULL)
		temp = temp->next;
	wordnum = temp->wordnum;
	arrayofstrings = malloc(sizeof(char*) * (wordnum + 1));
	while (s[index] == c)
		index++;
	temp = list;
	while (word < wordnum)
	{
		j = 0;
		arrayofstrings[word] = malloc(sizeof(char) * ((temp->wordlen) + 1));
		while (j < temp->wordlen)
			arrayofstrings[word][j++] = s[index++];
		arrayofstrings[word][j] = '\0';
		temp = temp->next;
		while (s[index] == c)
			index++;
		word++;
	}
	arrayofstrings[word] = (char*)'\0';
	return (arrayofstrings);
}

