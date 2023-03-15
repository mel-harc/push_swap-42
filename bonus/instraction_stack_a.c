/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction_stack_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:59:42 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:06:07 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_iinfo *info)
{
	int	tmp;

	if (!info->top || !info->top->next)
		return ;
	tmp = info->top->value;
	info->top->value = info->top->next->value;
	info->top->next->value = tmp;
}

void	ra(t_iinfo *info)
{
	t_llist	*head;
	t_llist	*tail;

	head = info->top;
	tail = info->bottom;
	if (!head || !head->next)
		return ;
	info->bottom = head;
	info->prev_bottom = tail;
	info->bottom->prev_lst = tail;
	tail->next = head;
	info->top = head->next;
	info->top->prev_lst = NULL;
	head->next = NULL;
}

void	rra(t_iinfo *info)
{
	t_llist	*head;
	t_llist	*tail;

	head = info->top;
	tail = info->bottom;
	if (!head || !head->next)
		return ;
	info->top = tail;
	info->top->next = head;
	info->top->next->prev_lst = info->top;
	info->bottom = tail->prev_lst;
	info->prev_bottom = info->bottom->prev_lst;
	info->bottom->next = NULL;
	info->top->prev_lst = NULL;
}
