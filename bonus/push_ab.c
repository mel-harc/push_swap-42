/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:05:22 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/13 21:31:57 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pb(t_iinfo *info, t_sstack *stack_b)
{
	t_llist	*head;

	head = info->top;
	if (!info->top)
		return ;
	if (!stack_b->top_b)
	{
		stack_b->top_b = head;
		stack_b->bottom_b = head;
		info->top = head->next;
		info->top->prev_lst = NULL;
		stack_b->top_b->next = NULL;
		stack_b->top_b->prev_lst = NULL;
		stack_b->prev_bottom_b = NULL;
	}
	else
		ft_eelse(head, info, stack_b);
	update_index(info);
	update_index_b(stack_b);
	write(1, "pb\n", 3);
}

void	ft_eelse(t_llist *head, t_iinfo *info, t_sstack *stack_b)
{
	info->top = head->next;
	head->next = stack_b->top_b;
	stack_b->top_b = head;
	stack_b->top_b->next->prev_lst = head;
	stack_b->prev_bottom_b = head;
	stack_b->top_b->prev_lst = NULL;
	if (info->top)
		info->top->prev_lst = NULL;
}

void	pa(t_iinfo *info, t_sstack *stack)
{
	t_llist	*head;

	head = stack->top_b;
	if (!stack->top_b)
		return ;
	stack->top_b = stack->top_b->next;
	head->next = info->top;
	info->top = head;
	if (info->top == stack->top_b)
	{
		stack->bottom_b = NULL;
		stack->top_b = NULL;
		stack->prev_bottom_b = NULL;
	}
	update_index(info);
	update_index_b(stack);
	write(1, "pa\n", 3);
}