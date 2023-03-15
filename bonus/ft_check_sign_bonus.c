/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sign_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:20:36 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:01:41 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	count_b(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_dup1_b(int *nbr, int i)
{
	int	k;
	int	j;

	k = i;
	j = i - 1;
	while (j >= 0)
	{
		if (nbr[k] == nbr[j])
			return (1);
		else
			j--;
	}
	return (0);
}

int	check_sign_b(char *av)
{
	char	**str;
	int		i;

	i = 0;
	if (av[0] == '\0')
		error_b(1);
	else if (ft_strchr(av, ' ') != NULL)
	{
		str = ft_split(av, ' ');
		if (!str || !*str)
			error_b(1);
		while (str[i])
			if (check_alpha_b(str[i++]) == 1)
				return (1);
		i = 0;
		while (str[i])
			free(str[i++]);
		free(str);
	}
	else if (check_alpha_b(av) == 1)
		return (1);
	return (0);
}

int	check_alpha_b(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	if ((str[0] == '+' || str[0] == '-') && str[1] == '\0')
		return (1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		else
			i++;
	}
	return (0);
}
