/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 13:43:39 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/05 13:55:32 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int main()
{
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-342);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
}
