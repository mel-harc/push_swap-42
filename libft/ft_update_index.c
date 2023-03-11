/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:15:48 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 20:25:24 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_update_index(t_info *info)
{
	t_list	*head_sa;
	int		i;

	head_sa = info->top;
	i = 0;
	while (head_sa)
	{
		head_sa->index = i++;
		head_sa = head_sa->next;
	}
}

void	ft_update_index_b(t_stack *stack)
{
	t_list	*head_sb;
	int		i;

	head_sb = stack->top_b;
	i = 0;
	while (head_sb)
	{
		head_sb->index = i++;
		head_sb = head_sb->next;
	}
}
