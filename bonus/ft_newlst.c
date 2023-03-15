/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:24:09 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:08:11 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_llist	*lstnew(int content)
{
	t_llist	*lst;

	lst = (t_llist *)malloc(sizeof(t_llist));
	if (lst == 0)
		return (0);
	lst->value = content;
	lst->next = 0;
	return (lst);
}
