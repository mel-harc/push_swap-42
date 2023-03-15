/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:18:29 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:00:00 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	add(t_iinfo *info, t_llist *new)
{
	t_llist	*last;

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
