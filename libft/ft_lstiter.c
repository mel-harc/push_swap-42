/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:16:11 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 19:21:55 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_of_3nbr(t_info *info)
{
	int	t;
	int	m;
	int	b;

	t = info -> top -> value;
	m = info -> top -> next -> value;
	b = info -> top -> next -> next -> value;
	if ((m < t && m < b && t < b) || (m < t && m > b && t > b) \
		|| (m > b && m > t && t < b))
		ft_sa(info);
	t = info -> top -> value;
	m = info -> top -> next -> value;
	b = info -> top -> next -> next -> value;
	if (m < t && m < b && t > b)
		ft_ra(info);
	t = info -> top -> value;
	m = info -> top -> next -> value;
	b = info -> top -> next -> next -> value;
	if (m > t && m > b && t > b)
		ft_rra(info);
	ft_update_index(info);
}
