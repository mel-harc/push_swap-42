/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:14:30 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 19:15:49 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add(t_info *info, t_list *new)
{
	t_list	*last;

	last = info->bottom;
	if (info->top == NULL)
	{
		info->top = new;
		new->prev_lst = NULL;
		info->bottom = new;
	}
	else
	{
		info -> prev_bottom = last;
		new->prev_lst = last;
		last->next = new;
		info->bottom = new;
	}
}
