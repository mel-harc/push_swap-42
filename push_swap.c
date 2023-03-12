/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:01:37 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/12 12:09:45 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
			if (ft_check_sign(av[i++]) == 1)
				ft_error(1);
		if (ft_check_dup(av) == 1)
			ft_error(1);
	}
	return (0);
}
