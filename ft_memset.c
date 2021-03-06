/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:06:28 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/11 17:01:16 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	x = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		*x = (unsigned char)c;
		x++;
		i++;
	}
	return (s);
}
