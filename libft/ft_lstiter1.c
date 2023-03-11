/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:00:41 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 20:03:13 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_of_5nbr(t_info *info)
{
	t_stack	stack;

	stack.bottom_b = NULL;
	stack.top_b = NULL;
	stack.prev_bottom_b = NULL;
	ft_f(info, &stack, ft_lstmin(info));
	ft_f(info, &stack, ft_lstmin(info));
	ft_algo_of_3nbr(info);
	ft_pa(info, &stack);
	ft_pa(info, &stack);
	return ;
}

void	ft_algo_of_4nbr(t_info *info)
{
	t_stack	stack;

	stack.bottom_b = NULL;
	stack.top_b = NULL;
	stack.prev_bottom_b = NULL;
	ft_f(info, &stack, ft_lstmin(info));
	ft_algo_of_3nbr(info);
	ft_pa(info, &stack);
}

void	ft_f(t_info *info, t_stack *stack, t_list *min)
{
	while (min != info->top)
	{
		if (min->index > info->size_lst / 2)
			ft_rra(info);
		else if (min->index <= info->size_lst / 2)
			ft_ra(info);
	}
	ft_pb(info, stack);
}
