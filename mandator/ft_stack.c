/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:56:49 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/12 20:45:16 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_fill_stack(int *nbr, int size)
{
	int		i;
	t_list	*tmp;
	t_info	info;

	ft_inial(&info, size);
	i = 0;
	while (i < size)
	{
		tmp = ft_lstnew(nbr[i], i);
		ft_add(&info, tmp);
		i++;
	}
	if (size == 2)
		ft_sa(&info);
	else if (size == 3)
		ft_algo_of_3nbr(&info);
	else if (size == 4)
		ft_algo_of_4nbr(&info);
	else if (size == 5)
		ft_algo_of_5nbr(&info);
	else if (size > 5)
		ft_algo_sort(&info);
	ft_free_stack(&info);
}

void	ft_free_stack(t_info *info)
{
	t_list	*head;
	t_list	*tmp;

	head = info->top;
	while (head)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
}

void	ft_inial(t_info *info, int size)
{
	info->bottom = NULL;
	info->top = NULL;
	info->prev_bottom = NULL;
	info->size_lst = size;
}
