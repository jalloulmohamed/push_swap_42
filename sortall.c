/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:52:58 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 15:56:07 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sortall(t_list **stacka, t_list **stackb, int len, int div)
{
	int	*tabstacka;
	int	x;
	int	i;
	int	y;

	tabstacka = linked_to_tab(*stacka);
	sort_tab(tabstacka, len);
	x = len / div - 1;
	while (x <= len)
	{
		i = 0;
		y = len - ft_lstsize(*stackb);
		while (i < y)
		{
			if ((*stacka)->content <= tabstacka[x])
				ft_pb(stacka, stackb, 1);
			else
				ft_ra(stacka, 1);
			i++;
		}
		x += len / div;
	}
	push_to_stack_a(stacka, stackb, len);
	free (tabstacka);
}
