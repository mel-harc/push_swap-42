/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:09:24 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 20:10:09 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

s_list	*ft_lstnew(int content, int i)
{
	s_list	*lst;

	lst = (s_list *)malloc(sizeof(s_list));
	if (lst == 0)
		return (0);
	lst->value = content;
	lst->index = i;
	lst->next = 0;
	return (lst);
}
