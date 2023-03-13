/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rank.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:20:29 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/12 20:45:08 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_addr(t_list **tab)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = NULL;
	while (tab[i + 1])
	{
		if (tab[i]->value > tab[i + 1]->value)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

void	ft_rank(t_info *info)
{
	t_list	*head;
	t_list	**tab;
	int		i;

	head = info->top;
	tab = malloc(sizeof(t_list *) * info->size_lst);
	i = 0;
	while (head)
	{
		tab[i] = head;
		head = head->next;
		i++;
	}
	tab[i] = head;
	ft_swap_addr(tab);
	i = -1;
	while (tab[++i])
		tab[i]->rank = i;
	free(tab);
}
