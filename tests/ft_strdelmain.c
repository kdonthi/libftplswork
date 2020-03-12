/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:38:20 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/01 17:32:29 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
int main()
{
	char a = 'a';
	char* b = malloc(sizeof(char) * 1);
	*b = a;
	char **c = malloc(sizeof(char*) * 1);
	*c = b;
	printf("a before: %c\n", **c);
	ft_memdel((void**)c);
	printf("a after: %c\n", **c);
	return (0);
}
