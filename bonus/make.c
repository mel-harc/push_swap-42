/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:23:26 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/13 22:37:23 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_make(char *str)
{
	t_iinfo		info;
	t_sstack	stack;
	
	if (!ft_strcmp(str, "sa"))
		sa(&info);
	else if (!ft_strcmp(str, "sb"))
		sb(&stack);
	else if (!ft_strcmp(str, "ra"))
		ra(&info);
	else if (!ft_strcmp(str, "rb"))
		rb(&stack);
	else if (!ft_strcmp(str, "rra"))
		rra(&info);
	else if (!ft_strcmp(str, "rrb"))
		rrb(&stack);
	else if (!ft_strcmp(str, "pa"))
		pa(&info, &stack);
	else if (!ft_strcmp(str, "pb"))
		pb(&info, &stack);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}