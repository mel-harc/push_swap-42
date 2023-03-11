/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:03:40 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 20:05:39 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstmax(t_stack *head)
{
	int		max;
	t_list	*addr;
	t_list	*top;

	addr = NULL;
	top = head->top_b;
	max = top->value;
	addr = top;
	while (top)
	{
		if (top->value > max)
		{
			max = top->value;
			addr = top;
		}
		else
			top = top->next;
	}
	return (addr);
}
