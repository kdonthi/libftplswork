/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:26:14 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/02 15:07:05 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

long	ft_strlen(const char *string)
{
	long len;

	len = 0;
	if (string)
	{
		while (string[len] != '\0')
			len++;
		return (len);
	}
	else
		return (-1);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	long i;
	char *string;

	i = 0;
	if (s)
	{
		string = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (string)
		{
			while (s[i] != '\0')
			{
				string[i] = (*f)(s[i]);
				i++;
			}
			string[i] = '\0';
			return (string);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
