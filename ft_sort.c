/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:42:40 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 15:47:01 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sort(t_list *stacka, t_list *stackb, int len)
{
	int	f;

	f = 5;
	if (len == 500)
		f = 10;
	if (len == 2)
		ft_sa(stacka, 1);
	else if (len == 3)
		sorttre(&stacka);
	else if (len == 5 || len == 4)
		sortfiv(&stacka, &stackb, len);
	else
	{
		sortall(&stacka, &stackb, len, f);
	}
}
