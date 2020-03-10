/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:16:12 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/21 16:34:18 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	long i;
	char *newstring;

	i = 0;
	while (*(s1 + i) != '\0')
		i++;
	newstring = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*s1 != '\0')
	{
		newstring[i] = *s1;
		s1++;
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
