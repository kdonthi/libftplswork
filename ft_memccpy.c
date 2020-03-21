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
#include <stdio.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t	i;

	dest1 = (unsigned char*)dest;
	src1 = (unsigned char*)src;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n && src1[i] != (unsigned char)c)
	{
		dest1[i] = src1[i];
		i++;
	}
	if (i <= (n - 1))
	{
		dest1[i] = src1[i];
		return (dest + ++i);
	}
	else
	{
		return (NULL);
	}
}
