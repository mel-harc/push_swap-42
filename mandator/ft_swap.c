/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:15:44 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/12 20:45:27 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_info *info)
{
	int	tmp;

	tmp = info->top->value;
	info->top->value = info->top->next->value;
	info->top->next->value = tmp;
	write(1, "sa\n", 3);
}

void	ft_ra(t_info *info)
{
	t_list	*head;
	t_list	*tail;

	head = info->top;
	tail = info->bottom;
	info->bottom = head;
	info->prev_bottom = tail;
	info->bottom->prev_lst = tail;
	tail->next = head;
	info->top = head->next;
	info->top->prev_lst = NULL;
	head->next = NULL;
	ft_update_index(info);
	write(1, "ra\n", 3);
}

void	ft_rra(t_info *info)
{
	t_list	*head;
	t_list	*tail;

	head = info->top;
	tail = info->bottom;
	info->top = tail;
	info->top->next = head;
	info->top->next->prev_lst = info->top;
	info->bottom = tail->prev_lst;
	info->prev_bottom = info->bottom->prev_lst;
	info->bottom->next = NULL;
	info->top->prev_lst = NULL;
	ft_update_index(info);
	write(1, "rra\n", 4);
}
