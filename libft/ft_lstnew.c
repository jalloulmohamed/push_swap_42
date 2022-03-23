/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:57:37 by mjalloul          #+#    #+#             */
/*   Updated: 2021/11/16 02:34:51 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

t_list	*ft_lstnew(int	content)
{
	t_list	*p;

	p = (t_list *) malloc(sizeof(t_list));
	if (!p)
		return (0);
	p->content = content;
	p->next = NULL;
	p->prev = NULL;
	return (p);
}
