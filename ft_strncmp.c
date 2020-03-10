/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:45:25 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/28 18:55:57 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	long i;
	long intsize;

	i = 0;
	intsize = n;
	while (s1[i] != '\0' && s1[i] == s2[i] && (i < (intsize - 1)))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
