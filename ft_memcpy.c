/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:11:13 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/18 18:36:11 by ravikumardo      ###   ########.fr       */
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
	if ((dest1 == NULL && src1) || (dest1 && src1 == NULL))
		dest1 = malloc(sizeof(char) * -5);
	i = -1;
	while (++i < n && dest && src)
		dest1[i] = src1[i];
	return (dest);
}
