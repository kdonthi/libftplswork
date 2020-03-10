/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:01:38 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/26 16:31:33 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *hs, const char *ndl)
{
	long s1ind;
	long s2ind;
	long i;

	s1ind = 0;
	s2ind = 0;
	while (hs[s1ind] != '\0')
	{
		i = 0;
		while (hs[s1ind + i] == ndl[s2ind + i] && ndl[s2ind + i] != '\0')
			i++;
		if (ndl[s2ind + i] == '\0')
			return ((char*)&hs[s1ind]);
		s1ind++;
	}
	return (NULL);
}
