/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_instraction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:20:25 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:01:08 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss(t_iinfo *info, t_sstack *stack)
{
	sa(info);
	sb(stack);
}

void	rr(t_iinfo *info, t_sstack *stack)
{
	ra(info);
	rb(stack);
}

void	rrr(t_iinfo *info, t_sstack *stack)
{
	rra(info);
	rrb(stack);
}
