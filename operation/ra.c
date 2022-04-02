/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:33:26 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:17:45 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_ra(t_list **linked, int p)
{
	t_list	*tem;
	t_list	*tem1;

	if (!*linked)
		return ;
	if ((*linked)->next)
	{
		tem = *linked;
		*linked = (*linked)->next;
		tem1 = ft_lstlast(*linked);
		tem1->next = tem;
		tem->prev = tem1;
		tem->next = NULL;
		if (p == 1)
			write(1, "ra\n", 3);
	}
}
