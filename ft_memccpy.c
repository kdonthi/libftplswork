/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:34:25 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/05 15:47:43 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	dest1 = (char*)dest;
	src1 = (char*)src;
	i = 0;
	while (i < n && src1[i] != (unsigned char)c)
	{
		dest1[i] = src1[i];
		i++;
	}
	if (i <= (n - 1))
	{
		dest1[i] = src1[i];
		return (dest);
	}
	else
	{
		return (NULL);
	}
}
