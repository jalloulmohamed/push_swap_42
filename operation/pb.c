/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:28:04 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/01 18:30:54 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_antherb(t_list **stacka, t_list **stackb)
{
	(*stacka)->next = *stackb;
	(*stackb)->prev = *stacka;
	*stackb = *stacka;
	*stacka = NULL;
}

void	ft_pb(t_list **stacka, t_list **stackb, int p)
{
	t_list	*tem;

	if (p == 1)
		write(1, "pb\n", 3);
	if (!*stackb)
	{
		*stackb = *stacka;
		(*stacka) = (*stacka)->next;
		(*stacka)->prev = NULL;
		(*stackb)->next = NULL;
	}
	else if ((*stacka)->next)
	{
		tem = *stacka;
		(*stacka) = (*stacka)->next;
		(*stacka)->prev = NULL;
		tem->next = *stackb;
		(*stackb)->prev = tem;
		*stackb = tem;
	}
	else
		ft_antherb(stacka, stackb);
}
