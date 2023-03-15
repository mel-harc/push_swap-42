/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:13:18 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 23:46:01 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	size_t			rest;

	i = 0;
	sign = 1;
	rest = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		rest = rest * 10 + str[i] - 48;
		if (rest > 2147483648 && sign == -1)
			ft_error_a(1);
		else if (rest > 2147483647 && sign == 1)
			ft_error_a(1);
		i++;
	}
	return (rest * sign);
}

void	ft_error_a(int n)
{
	if (n == 1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}
