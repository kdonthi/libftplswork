/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:27:21 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/18 17:54:07 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*freshstring;
	size_t	i;

	freshstring = (char*)malloc(sizeof(char) * (size + 1));
	if (!freshstring)
		return (NULL);
	i = 0;
	while (i < size)
		freshstring[i++] = '\0';
	freshstring[i] = '\0';
	return (freshstring);
}
