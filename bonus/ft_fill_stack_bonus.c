/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:48:36 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/13 22:11:50 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	fill_stack(int *nbr, int size)
{
	int		i;
	t_llist	*tmp;
	t_iinfo	info;

	inial(&info, size);
	i = 0;
	while (i < size)
	{
		tmp = ft_lstnew(nbr[i], i);
		ft_add(&info, tmp);
		i++;
	}
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

void	inial(t_iinfo *info, int size)
{
	info->bottom = NULL;
	info->top = NULL;
	info->prev_bottom = NULL;
	info->size_lst = size;
}