/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksortlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:09:08 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:13:18 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	checksortlist(t_list *linked)
{
	while (linked->next)
	{
		if (linked->content < linked->next->content)
		{
			linked = linked->next;
		}
		else
			return (1);
	}
	return (0);
}
