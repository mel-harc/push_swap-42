/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:00:19 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/12 20:45:23 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_stack *stack)
{
	int	tmp;

	tmp = stack->top_b->value;
	stack->top_b->value = stack->top_b->next->value;
	stack->top_b->next->value = tmp;
	write(1, "sb\n", 3);
}

void	ft_rb(t_stack *stack)
{
	t_list	*head;
	t_list	*tail;

	head = stack->top_b;
	tail = stack->bottom_b;
	if (!head->next)
		return ;
	stack->bottom_b = head;
	stack->prev_bottom_b = tail;
	stack->bottom_b->prev_lst = tail;
	tail->next = head;
	stack->top_b = head->next;
	stack->top_b->prev_lst = NULL;
	head->next = NULL;
	ft_update_index_b(stack);
	write(1, "rb\n", 3);
}

void	ft_rrb(t_stack *stack)
{
	t_list	*head;
	t_list	*tail;

	head = stack->top_b;
	tail = stack->bottom_b;
	if (!head->next)
		return ;
	stack->top_b = tail;
	stack->top_b->next = head;
	stack->top_b->next->prev_lst = stack->top_b;
	stack->bottom_b = tail->prev_lst;
	stack->prev_bottom_b = stack->bottom_b->prev_lst;
	stack->bottom_b->next = NULL;
	stack->top_b->prev_lst = NULL;
	ft_update_index_b(stack);
	write(1, "rrb\n", 4);
}
