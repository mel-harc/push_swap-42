/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction_stack_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:02:04 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:06:20 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sb(t_sstack *stack)
{
	int	tmp;

	if (!stack->top_b || !stack->top_b->next)
		return ;
	tmp = stack->top_b->value;
	stack->top_b->value = stack->top_b->next->value;
	stack->top_b->next->value = tmp;
}

void	rb(t_sstack *stack)
{
	t_llist	*head;
	t_llist	*tail;

	head = stack->top_b;
	tail = stack->bottom_b;
	if (!head || !head->next)
		return ;
	stack->bottom_b = head;
	stack->prev_bottom_b = tail;
	stack->bottom_b->prev_lst = tail;
	tail->next = head;
	stack->top_b = head->next;
	stack->top_b->prev_lst = NULL;
	head->next = NULL;
}

void	rrb(t_sstack *stack)
{
	t_llist	*head;
	t_llist	*tail;

	head = stack->top_b;
	tail = stack->bottom_b;
	if (!head || !head->next)
		return ;
	stack->top_b = tail;
	stack->top_b->next = head;
	stack->top_b->next->prev_lst = stack->top_b;
	stack->bottom_b = tail->prev_lst;
	stack->prev_bottom_b = stack->bottom_b->prev_lst;
	stack->bottom_b->next = NULL;
	stack->top_b->prev_lst = NULL;
}
