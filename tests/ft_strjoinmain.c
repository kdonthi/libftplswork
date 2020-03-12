/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinmain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:58:25 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/02 17:15:26 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	//should be basketball, ending with 0
	printf("Output 1: %s, Ends with %i\n", ft_strjoin("basket", "ball"), (ft_strjoin("basket", "ball"))[10]);
	//should be hula hoop
	printf("Output 2: %s\n", ft_strjoin("hula ", "hoop"));
	//should be hoop hula
	printf("Output 3: %s\n", ft_strjoin("hoop ", "hula"));
	//how to account for this?, segfault fine?
	printf("Output 4: %s\n", ft_strjoin(NULL, "ball"));
	//undefined behavior if one is null?
	//printf("Output 1: %s", ft_strjoin("basket", "ball"));
}
