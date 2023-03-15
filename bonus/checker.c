/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:14:50 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/16 00:35:29 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
			if (check_sign_b(av[i++]) == 1)
				error_b(1);
		if (check_dup_b(av) == 1)
			error_b(1);
	}
	return (0);
}
