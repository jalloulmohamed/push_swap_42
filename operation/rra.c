/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:41:59 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:18:46 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_rra(t_list *linked, int p)
{
	t_list	*tem;

	if (!linked)
		return ;
	if (linked->next)
	{
		tem = ft_lstlast(linked);
		tem->next = linked->next;
		linked->next->prev = tem;
		tem->prev->next = NULL;
		tem->prev = linked;
		linked->next = tem;
		ft_sa(linked, 4);
		if (p == 1)
			write(1, "rra\n", 4);
	}
}
