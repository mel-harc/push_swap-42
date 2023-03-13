/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:24:09 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/13 21:25:04 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_llist	*ft_lstnew(int content, int i)
{
	t_llist	*lst;

	lst = (t_llist *)malloc(sizeof(t_llist));
	if (lst == 0)
		return (0);
	lst->value = content;
	lst->index = i;
	lst->next = 0;
	return (lst);
}