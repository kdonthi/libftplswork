/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:56:08 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/04 14:12:19 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

long	strip_len(const char *string)
{
	long len;
	long j;

	len = 0;
	while (*string == ' ' || *string == '\t' || *string == '\n')
		string++;
	while (1)
	{
		while (string[len] != '\0' && string[len] != '\t' && string[len] != '\n'
	&& string[len] != ' ')
			len++;
		j = 0;
		while (string[len + j] == ' ' || string[len + j] == '\t' ||
		string[len + j] == '\n')
			j++;
		if (string[len + j] == '\0')
			return (len);
		while (string[len] == ' ' || string[len] == '\t' || string[len] == '\n')
			len++;
	}
	return (-1);
}

char	*ft_strtrim(char const *s)
{
	long	j;
	long	i;
	long	length;
	char	*newstring;

	j = 0;
	i = 0;
	length = strip_len(s);
	newstring = (char*)malloc(sizeof(char) * (length + 1));
	if (!newstring)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (j < length && s[i + j] != '\0')
	{
		newstring[j] = s[i + j];
		j++;
	}
	newstring[j] = '\0';
	return (newstring);
}
