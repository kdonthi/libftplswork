/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:40:47 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/11 16:37:07 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*string;

	i = 0;
	string = (char*)malloc(sizeof(char) * size);
	if (!string)
		return (NULL);
	while (i < size)
		string[i++] = 0;
	return (string);
}
