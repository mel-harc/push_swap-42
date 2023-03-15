/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:48:36 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:09:43 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	fill_stack(int *nbr, int size)
{
	int			i;
	char		*str;
	t_llist		*tmp;
	t_sstack	stack;
	t_iinfo		info;

	i = 0;
	inial(&info, &stack);
	while (i < size)
	{
		tmp = lstnew(nbr[i]);
		add(&info, tmp);
		i++;
	}
	str = get_next_line(0);
	while (str)
	{
		ft_make(str, &info, &stack);
		free(str);
		str = NULL;
		str = get_next_line(0);
	}
	free(str);
	check_sort(&info, &stack);
	free_stack(&info);
}

void	free_stack(t_iinfo *info)
{
	t_llist	*head;
	t_llist	*tmp;

	head = info->top;
	while (head)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
}

void	inial(t_iinfo *info, t_sstack *stack)
{
	info->bottom = NULL;
	info->top = NULL;
	info->prev_bottom = NULL;
	stack->bottom_b = NULL;
	stack->top_b = NULL;
	stack->prev_bottom_b = NULL;
}
