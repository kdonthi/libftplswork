/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:47:35 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/21 13:24:16 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	dest1 = (char*)dest;
	src1 = (char*)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			*(dest1 + i) = *(src1 + i);
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			*(dest1 + (n - 1) - i) = *(src1 + (n - 1) - i);
			i++;
		}
	}
	return (dest1);
}
