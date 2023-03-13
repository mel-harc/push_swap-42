/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:27:57 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/13 21:35:57 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	update_index(t_iinfo *info)
{
	t_llist	*head_sa;
	int		i;

	head_sa = info->top;
	i = 0;
	while (head_sa)
	{
		head_sa->index = i++;
		head_sa = head_sa->next;
	}
}

void	update_index_b(t_sstack *stack)
{
	t_llist	*head_sb;
	int		i;

	head_sb = stack->top_b;
	i = 0;
	while (head_sb)
	{
		head_sb->index = i++;
		head_sb = head_sb->next;
	}
}