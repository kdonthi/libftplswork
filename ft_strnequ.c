/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:17:30 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/02 16:32:21 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if ((s1 == NULL && s2 == NULL) || n == 0)
		return (1);
	else if (s1 == NULL || s2 == NULL)
		return (0);
	else
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && (i < (n - 1)))
			i++;
		if (s1[i] == s2[i])
			return (1);
		else
			return (0);
	}
}
