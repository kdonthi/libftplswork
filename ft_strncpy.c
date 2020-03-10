/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:55:17 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/26 14:58:48 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t num)
{
	size_t i;

	i = 0;
	while (*(src + i) != '\0' && i < num)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	while (i < num && *(dst + i) != '\0')
	{
		*(dst + i) = '\0';
		i++;
	}
	return (dst);
}
