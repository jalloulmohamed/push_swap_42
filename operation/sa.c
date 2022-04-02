/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:48:35 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:20:09 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_sa(t_list *linked, int p)
{
	int	tem;

	if (!linked)
		return ;
	if (linked->next)
	{
		tem = linked->content;
		linked->content = linked->next->content;
		linked->next->content = tem;
		if (p == 1)
			write(1, "sa\n", 3);
	}
}
