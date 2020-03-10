/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:59:20 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/04 17:46:26 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	putinarray(long n, int *ind, char *array)
{
	if (n < 0)
	{
		array[(*ind)++] = '-';
		n *= -1;
	}
	if (n >= 10)
		putinarray((n / 10), ind, array);
	array[(*ind)++] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char		*intarray;
	t_numprop	a;
	int			index;
	int			*ptoi;

	a.copy = n;
	a.digits = 0;
	a.neg = 0;
	if (a.copy < 0)
		a.neg = 1;
	while (a.copy != 0)
	{
		a.copy /= 10;
		a.digits++;
	}
	intarray = malloc(sizeof(char) * (a.digits + a.neg));
	index = 0;
	ptoi = &(index);
	putinarray(n, ptoi, intarray);
	return (intarray);
}
