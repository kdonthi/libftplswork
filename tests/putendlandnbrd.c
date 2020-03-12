/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendlandnbrd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:15:56 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/05 14:25:27 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
int main()
{
	//stdin
	ft_putendl_fd("Hello, World! on stdin\n", 0);
	//stdout
	ft_putendl_fd("Hello, World! on stdout\n", 1);
	//stderr
	ft_putendl_fd("Hello, World! on stderr\n", 2);
	//stdin
	printf("INT MIN ON STDIN\n");
	ft_putnbr_fd(INT_MIN, 0);
	printf("\n");
	//stdout
	printf("INT MAX ON STDOUT\n");
	ft_putnbr_fd(-3, 1);
	printf("\n");
	//stderr, when we have consecutive commands to stderr, the second one comes before the first one!
	printf("-3 ON STDERR");
	ft_putnbr_fd(69, 2);
	printf("\n");
}
