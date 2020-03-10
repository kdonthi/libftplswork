/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:33:07 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/26 15:45:07 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(char *str, int intchr)
{
	long lastinstofchr;
	long index;
	char character;

	character = (char)intchr;
	lastinstofchr = -1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == character)
			lastinstofchr = index;
		index++;
	}
	if (str[index] == character)
		lastinstofchr = index;
	if (lastinstofchr == -1)
		return (NULL);
	return (&str[lastinstofchr]);
}
