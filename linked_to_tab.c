/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:19:36 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 15:20:32 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	*linked_to_tab(t_list *stack)
{
	int	*tabstack;
	int	i;

	i = 0;
	tabstack = malloc(sizeof(int) * ft_lstsize(stack));
	while (stack)
	{
		tabstack[i] = stack->content;
		i++;
		stack = stack->next;
	}
	return (tabstack);
}
