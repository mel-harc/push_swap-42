/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:32:39 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:02:38 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_sort(t_iinfo *info, t_sstack *stack)
{
	t_llist	*head;

	head = info->top;
	while (head && head->next)
	{
		if (head->value < head->next->value)
			head = head->next;
		else
		{
			valid_sort(1);
			return ;
		}
	}
	if (stack->top_b)
	{
		valid_sort(1);
		return ;
	}
	valid_sort(0);
}

void	valid_sort(int n)
{
	if (n != 0)
		write(1, "KO\n", 3);
	else if (n == 0)
		write(1, "OK\n", 3);
}
