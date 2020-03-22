/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:11:13 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/21 13:25:11 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	dest1 = (char*)dest;
	src1 = (char*)src;
	i = -1;
	if (!dest && !src)
		return (NULL);
	while (++i < n)
		dest1[i] = src1[i];
	return (dest);
}
