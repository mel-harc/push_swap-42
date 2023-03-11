/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:25:00 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 23:01:58 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_dup(char **av)
{
	char	**str_2d;
	int		*numbers;
	size_t	size;
	int		i;

	i = 0;
	str_2d = ft_split(ft_fill(av), ' ');
	size = ft_count(str_2d);
	numbers = malloc(sizeof(int) * size);
	while (str_2d[i])
	{
		numbers[i] = ft_atoi(str_2d[i]);
		if (ft_check_dup1(numbers, i) == 1)
			return (1);
		i++;
	}
	if (ft_check_ordre(numbers, size) == 1)
		ft_error(2);
	ft_fill_stack(numbers, size);
	ft_free(str_2d, numbers);
	return (0);
}

char	*ft_fill(char **av)
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

void	ft_free(char **str, int *nbr)
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
	return ;
}

int	ft_check_ordre(int *nbr, int size)
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

void	ft_error(int n)
{
	if (n == 1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (n == 2)
		exit(0);
}
