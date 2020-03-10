/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:03:12 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/02 16:13:03 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int main()
{
	//should be 0
	printf("Output 1: %i\n", ft_strequ("hello", "bye"));
	//should be 1
	printf("Output 2: %i\n", ft_strequ("bye", "bye"));
	//should be 1
	printf("Output 3: %i\n", ft_strequ(NULL, NULL));
	//both should be 0
	printf("Output 4/5: %i, %i", ft_strequ(NULL, "bye"), ft_strequ("bye", NULL));
}
