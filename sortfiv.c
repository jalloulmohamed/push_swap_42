/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfiv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:56:42 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 16:02:19 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_top(t_list *stacka)
{
	int	i;

	i = stacka->content;
	while (stacka)
	{
		if (i < stacka->content)
			i = stacka->content;
		stacka = stacka->next;
	}
	return (i);
}

int	ft_bottom(t_list *stacka)
{
	int	i;

	i = stacka->content;
	while (stacka)
	{
		if (i > stacka->content)
			i = stacka->content;
		stacka = stacka->next;
	}
	return (i);
}

void	sortfiv(t_list **stacka, t_list **stackb, int len)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = ft_top(*stacka);
	k = ft_bottom(*stacka);
	while (j < len)
	{
		if ((*stacka)->content == k || (*stacka)->content == i)
			ft_pb(stacka, stackb, 1);
		else
			ft_ra(stacka, 1);
		j++;
	}
	if ((*stackb)->content < (*stackb)->next->content)
		ft_sb(*stackb, 1);
	if (len == 5)
		sorttre(stacka);
	else
		if ((*stacka)->content > (*stacka)->next->content)
			ft_sa(*stacka, 1);
	ft_pa(stacka, stackb, 1);
	ft_ra(stacka, 1);
	ft_pa(stacka, stackb, 1);
}
