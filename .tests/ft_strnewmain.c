/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:43:33 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/29 17:35:45 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main()
{
	int x = -3;
	int i = 0;

	char *string = ft_strnew(x);
	if (!string)
	{
		printf("ERROR");
		return(1);
	}
	while (i < x)
	{
		printf("%i: %c\n", i, string[i]);
		i++;
	}
}
