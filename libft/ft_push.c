/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:27:26 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 20:36:14 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_info *info, t_stack *stack_b)
{
	t_list	*head;

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
		ft_else(head, info, stack_b);
	ft_update_index(info);
	ft_update_index_b(stack_b);
	write(1, "pb\n", 3);
}

void	ft_else(t_list *head, t_info *info, t_stack *stack_b)
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

void	ft_pa(t_info *info, t_stack *stack)
{
	t_list	*head;

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
	ft_update_index(info);
	ft_update_index_b(stack);
	write(1, "pa\n", 3);
}
