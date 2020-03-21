/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:37:35 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/18 19:22:26 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long		i;
	int			neg;
	int			number;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
	|| str[i] == '\t' || str[i] == '\v')
		i++;
	neg = 1;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (neg * (str[i] - '0'));
		i++;
	}
	return (number);
}
