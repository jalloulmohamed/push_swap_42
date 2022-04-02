/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:14:40 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:15:33 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

char	*ft_strdup_line(const char *s1)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s1[i] != '\n')
		i++;
	if (s1[i] == '\n')
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (0);
	while (i)
	{
		p[j] = s1[j];
		i--;
		j++;
	}
	p[j] = '\0';
	return (p);
}
