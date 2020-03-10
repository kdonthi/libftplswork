/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:45:24 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/02 16:55:29 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	//should be "ello", ending with 0
	printf("Output 1: %s, String ends with: %i\n", ft_strsub("Hello", 1, 4), (ft_strsub("hello", 1, 4))[4]);
	//should be "Hello Worl"
	printf("Output 2: %s\n", ft_strsub("Hello World!", 0, 10));
	//should be undefined behavior
	printf("Output 3: %s\n", ft_strsub("Hello World!", 17, 30));
	//should be null
	printf("Output 4: %s\n", ft_strsub("Hello World!", 0, -20));
}
