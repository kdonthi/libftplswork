/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:15:18 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/28 18:54:51 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	int dstlength;
	int srclength;
	int i;
	int intsize;

	intsize = size;
	dstlength = 0;
	while (dst[dstlength] != '\0')
		dstlength++;
	srclength = 0;
	while (src[srclength] != '\0')
		srclength++;
	i = 0;
	while ((intsize - 1) > (dstlength + i) && src[i] != '\0')
	{
		dst[dstlength + i] = src[i];
		i++;
	}
	dst[dstlength + i] = '\0';
	if (dstlength > intsize)
		return (intsize + srclength);
	else
		return (dstlength + srclength);
}
