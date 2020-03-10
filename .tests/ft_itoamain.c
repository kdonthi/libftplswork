/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoamain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:59:24 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/04 17:30:45 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Should be 345: %s\n", ft_itoa(345));
    printf("Should be 12930981: %s\n", ft_itoa(12930981));
    printf("Should be int min: %s\n", ft_itoa(INT_MIN));
    printf("Should be int max: %s\n", ft_itoa(INT_MAX));
    printf("Should be -3234: %s\n", ft_itoa(-3234));
}
