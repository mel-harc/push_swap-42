/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:19:44 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/13 20:38:48 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_dup_b(char **av)
{
	char	**str_2d;
	int		*numbers;
	char	*str_j;
	size_t	size;
	int		i;

	i = 0;
	str_j = fill_b(av);
	str_2d = ft_split(str_j, ' ');
	if (!str_2d)
		error_b(1);
	size = count_b(str_2d);
	numbers = malloc(sizeof(int) * size);
	while (str_2d[i])
	{
		numbers[i] = ft_atoi(str_2d[i]);
		if (check_dup1_b(numbers, i) == 1)
			return (1);
		i++;
	}
	if (check_ordre_b(numbers, size) == 1)
		error_b(2);
	fill_stack(numbers, size);
	free_b(str_2d, numbers, str_j);
	return (0);
}

char	*fill_b(char **av)
{
	int		i;
	char	*tmp;
	char	*str;

	i = 1;
	str = NULL;
	tmp = NULL;
	while (av[i])
	{
		tmp = str;
		str = ft_strjoin(str, av[i]);
		i++;
	}
	return (str);
}

void	free_b(char **str, int *nbr, char *str_j)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	free(nbr);
	free(str_j);
	return ;
}

int	check_ordre_b(int *nbr, int size)
{
	int	i;

	i = 0;
	while (i < size && i + 1 < size)
	{
		if (nbr[i] < nbr[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

void	error_b(int n)
{
	if (n == 1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (n == 2)
		exit(0);
}