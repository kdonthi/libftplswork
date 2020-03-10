/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:20:43 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/26 14:43:59 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char *str, int intchr)
{
	char character;

	character = (char)intchr;
	while (*str != '\0')
	{
		if (*str == character)
			return (str);
		str++;
	}
	if (*str == character)
		return (str);
	return (NULL);
}
