/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:37:35 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/21 18:23:15 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long			i;
	int				neg;
	long long		num;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
	|| str[i] == '\t' || str[i] == '\v')
		i++;
	neg = 1;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > 922337203685477580 || (num == 922337203685477580
		&& str[i] >= '7'))
			return (-1);
		if (num < -922337203685477580 || (num == -922337203685477580 &&
		str[i] >= '8'))
			return (0);
		num = (num * 10) + (neg * (str[i++] - '0'));
	}
	return ((int) num);
}
