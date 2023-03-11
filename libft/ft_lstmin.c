/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:06:24 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 20:08:37 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstmin(t_info *info)
{
	int		min;
	t_list	*addr;
	t_list	*top;

	addr = NULL;
	top = info->top;
	min = top->value;
	addr = top;
	while (top)
	{
		if (top->value < min)
		{
			min = top->value;
			addr = top;
		}
		else
			top = top->next;
	}
	return (addr);
}
