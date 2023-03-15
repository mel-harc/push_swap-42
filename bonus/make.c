/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:23:26 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:07:02 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_make(char *str, t_iinfo *info, t_sstack *stack)
{
	if (ft_strcmp(str, "sa\n"))
		sa(info);
	else if (ft_strcmp(str, "sb\n"))
		sb(stack);
	else if (ft_strcmp(str, "ra\n"))
		ra(info);
	else if (ft_strcmp(str, "rb\n"))
		rb(stack);
	else if (ft_strcmp(str, "rra\n"))
		rra(info);
	else if (ft_strcmp(str, "rrb\n"))
		rrb(stack);
	else if (ft_strcmp(str, "pa\n"))
		pa(info, stack);
	else if (ft_strcmp(str, "pb\n"))
		pb(info, stack);
	else if (ft_strcmp(str, "rr\n"))
		rr(info, stack);
	else if (ft_strcmp(str, "rrr\n"))
		rrr(info, stack);
	else if (ft_strcmp(str, "ss\n"))
		ss(info, stack);
	else
		error_b(1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
