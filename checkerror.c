/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:55:32 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 15:02:33 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	checksort(char **tabint)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (tabint[j])
	{
		if (ft_atoi(tabint[i]) < ft_atoi(tabint[j]))
		{
			i++;
			j++;
		}
		else
			return (1);
	}
	return (0);
}

int	checkcar(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (ft_isdigit(tab[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	checkdouble(char **tabint)
{
	int	i;
	int	j;
	int	k;

	k = ft_strlentab(tabint);
	i = 0;
	while (i < k)
	{
		j = i + 1;
		while (j < k)
		{
			if (ft_atoi(tabint[i]) == ft_atoi(tabint[j])
				|| ft_atoi(tabint[i]) > 2147483647
				|| ft_atoi(tabint[i]) < -2147483647)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	checkerror(char *tab, char **tabint)
{
	if (checkcar(tab) == 1 || checkdouble(tabint) == 1)
	{
		write(1, "Error", 5);
		return (1);
	}
	if (checksort(tabint) == 0)
		return (1);
	return (0);
}
