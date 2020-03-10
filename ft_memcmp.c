/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:44:17 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/21 14:16:40 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			i;
	unsigned char	*ptr11;
	unsigned char	*ptr21;

	i = 0;
	ptr11 = (unsigned char*)ptr1;
	ptr21 = (unsigned char*)ptr2;
	while (i < (num - 1) && *ptr11 == *ptr21)
	{
		i++;
		ptr11++;
		ptr21++;
	}
	return (*ptr11 - *ptr21);
}
