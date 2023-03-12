/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bogo_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:55:29 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/12 00:51:30 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_sort(t_info *info)
{
	t_stack	stack;
	int		m;

	m = 8;
	ft_rank(info);
	if (info->size_lst >= 5 && info->size_lst <= 300)
		m = 8;
	else if (info->size_lst >= 200)
		m = 16;
	ft_first_sort(info, &stack, m);
	ft_final_sort(&stack, info);
}

void	ft_first_sort(t_info *info, t_stack *stack, int m)
{
	int	i;
	int	j;

	i = 0;
	while (info->top)
	{
		j = info->size_lst / m;
		if (info->top->rank <= i)
		{
			ft_pb(info, stack);
			i++;
		}
		else if (info->top->rank <= i + j)
		{
			ft_pb(info, stack);
			ft_rb(stack);
			i++;
		}
		else
			ft_ra(info);
	}
}

void	ft_final_sort(t_stack *stack, t_info *info)
{
	t_list	*max;

	while (stack->top_b)
	{
		max = ft_lstmax(stack);
		if (max->index == 0)
		{
			ft_pa(info, stack);
			info->size_lst--;
		}
		else if (max->index > info->size_lst / 2)
		{
			ft_rrb(stack);
		}
		else if (max->index <= info->size_lst / 2)
		{
			ft_rb(stack);
		}
	}
}
