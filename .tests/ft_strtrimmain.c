/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimmain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:52:53 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/05 15:13:21 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main ()
{
	//should be hello
	printf("Output 1: %s\n", ft_strtrim("   hello   "));
	//should also be hello
	printf("Output 2: %s\n", ft_strtrim("hello"));
	//should be hello world
	printf("Output 3: %s\n", ft_strtrim(" Hello World! "));
	//should be a s d f
	printf("Output 4: %s\n", ft_strtrim(" a s d f "));
}
