/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:59:20 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/20 17:51:00 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	putinarray(long n, int *ind, char *array)
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

char		*ft_itoa(int n)
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
	if (a.copy == 0)
		a.digits = 1;
	while (a.copy != 0)
	{
		a.copy /= 10;
		a.digits++;
	}
	intarray = malloc(sizeof(char) * (a.digits + a.neg + 1));
	if (!intarray)
		return (NULL);
	index = 0;
	ptoi = &(index);
	putinarray(n, ptoi, intarray);
	intarray[a.digits + a.neg] = '\0';
	return (intarray);
}
