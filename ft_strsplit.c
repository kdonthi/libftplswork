/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:50:13 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/11 16:36:15 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void		apn(t_string **ptonode, t_string **ptotemp, long wc, long wl)
{
	*ptonode = malloc(sizeof(t_string));
	(*ptonode)->wordnum = wc;
	(*ptonode)->wordlen = wl;
	(*ptonode)->next = NULL;
	*ptotemp = *ptonode;
}

static t_string	*create_list(char const *s, char c)
{
	t_word		a;

	a.wc = 0;
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
			a.wc++;
			if (a.wc == 1)
				apn(&(a.head), &(a.temp), a.wc, a.wordlen);
			else
				apn(&((a.temp)->next), &(a.temp), a.wc, a.wordlen);
		}
		else
			return (a.head);
	}
}

static void		setwordandindex(int *a, long *b)
{
	*a = 0;
	*b = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	t_listi		k;

	k.list = create_list(s, c);
	k.temp = k.list;
	setwordandindex(&(k.word), &(k.index));
	while ((k.temp)->next != NULL)
		k.temp = (k.temp)->next;
	k.wordnumb = (k.temp)->wordnum;
	k.aos = malloc(sizeof(char*) * ((k.wordnumb) + 1));
	while (s[k.index] == c)
		k.index++;
	k.temp = k.list;
	while (k.temp != NULL)
	{
		k.j = 0;
		k.aos[k.word] = malloc(sizeof(char) * (((k.temp)->wordlen) + 1));
		while (k.j < (k.temp)->wordlen)
			k.aos[k.word][(k.j)++] = s[(k.index)++];
		k.aos[k.word++][k.j] = '\0';
		k.temp = (k.temp)->next;
		while (s[k.index] == c)
			(k.index)++;
	}
	k.aos[k.word] = (char*)'\0';
	return (k.aos);
}
