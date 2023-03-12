/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:09:07 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/12 10:24:39 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_count(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_dup1(int *nbr, int i)
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

int	ft_check_sign(char *av)
{
	char	**str;
	int		i;

	i = 0;
	if (av[0] == '\0')
		ft_error(1);
	else if (ft_strchr(av, ' ') != NULL)
	{
		str = ft_split(av, ' ');
		if (!str || !*str)
			ft_error(1);
		while (str[i])
			if (ft_check_alpha(str[i++]) == 1)
				return (1);
		i = 0;
		while (str[i])
			free(str[i++]);
		free(str);
	}
	else if (ft_check_alpha(av) == 1)
		return (1);
	return (0);
}

int	ft_check_alpha(char *str)
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
