/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:29:51 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/28 16:32:11 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	unsigned char x;

	if (c >= 256 || c < 0)
		return (0);
	x = (unsigned char)c;
	if (x >= 0 && x <= 127)
		return (1);
	else
		return (0);
}
