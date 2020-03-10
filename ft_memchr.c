/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:51:46 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/28 18:52:54 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	x = (unsigned char*)s;
	i = 0;
	while (i < n && *x != (unsigned char)c)
	{
		x++;
		i++;
	}
	if (i == n)
	{
		return (NULL);
	}
	else
	{
		return ((void*)x);
	}
}
