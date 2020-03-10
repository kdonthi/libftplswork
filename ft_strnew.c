/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:27:21 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/29 17:32:26 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*freshstring;
	size_t	i;

	freshstring = (char*)malloc(sizeof(char) * size);
	if (!freshstring)
		return (NULL);
	i = 0;
	while (i < size)
		freshstring[i++] = '\0';
	return (freshstring);
}
