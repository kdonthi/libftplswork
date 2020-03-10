/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequmain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:03:12 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/02 16:36:45 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int main()
{
	//should be 0
	printf("Output 1: %i\n", ft_strnequ("hello", "bye", 5));
	//should be 1
	printf("Output 2: %i\n", ft_strnequ("bye", "bye", 3));
	//should be 1
	printf("Output 3: %i\n", ft_strnequ(NULL, NULL, 3));
	//both should be 0
	printf("Output 4/5: %i, %i\n", ft_strnequ(NULL, "bye", 1), ft_strnequ("bye", NULL, 2));
	//should be 1
	printf("Output 6: %i\n", ft_strnequ("Ball", "Balo", 3));
	//should be 1
	printf("Output 7: %i\n", ft_strnequ("YOLO", "WHATSUP", 0));
}
