/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:12:12 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/05 14:43:56 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *h, const char *nd, size_t n)
{
	long	s1;
	long	i;
	long	is;

	s1 = 0;
	is = n;
	if (!nd)
		return (NULL);
	if (nd[0] == '\0')
		return ((char*)h);
	while (h[s1] != '\0' && s1 < is)
	{
		i = 0;
		while (h[s1 + i] == nd[i] && nd[i] != '\0' && (s1 + i) < is)
			i++;
		if (nd[i] == '\0')
			return ((char*)&(h[s1]));
		s1++;
	}
	return (NULL);
}
