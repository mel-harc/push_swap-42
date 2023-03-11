/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rank.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:20:29 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 18:53:55 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rank(t_info *info)
{
	t_list	*head;
	t_list	**tab;
	int		i;

	head = info->top;
	tab = malloc(sizeof(s_list *) * info->size_lst);
	i = -1;
	while (head)
	{
		tab[++i] = head;
		head = head->next;
	}
	tab[i] = head;
	ft_swap_addr(tab);
	i = -1;
	while (tab[++i])
		tab[i]->rank = i;
	ft_free(tab, tmp);
}

void	ft_free_rank(t_list **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_swap_add(t_list **tab)
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
