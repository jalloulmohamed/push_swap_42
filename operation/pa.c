/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:23:52 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:17:04 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_anther(t_list **stacka, t_list **stackb)
{
	(*stackb)->next = *stacka;
	(*stacka)->prev = *stackb;
	*stacka = *stackb;
	*stackb = NULL;
}

void	ft_pa(t_list **stacka, t_list **stackb, int p)
{
	t_list	*tem;

	if (!*stackb)
		return ;
	if (p == 1)
		write(1, "pa\n", 3);
	if (!*stacka)
	{
		*stacka = *stackb;
		(*stackb) = (*stackb)->next;
		(*stacka)->next = NULL;
		(*stackb)->prev = NULL;
	}
	else if ((*stackb)->next)
	{
		tem = *stackb;
		(*stackb) = (*stackb)->next;
		tem->next = *stacka;
		(*stacka)->prev = tem;
		*stacka = tem;
		(*stackb)->prev = NULL;
	}
	else
		ft_anther(stacka, stackb);
}
