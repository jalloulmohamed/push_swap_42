/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:47:53 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 15:52:17 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkargvide(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] != ' ')
			return (1);
		i++;
	}
	write(1, "Error", 5);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*tab;
	int		i;
	char	**tabint;
	t_list	*linked;
	t_list	*stackb;

	if (argc == 1)
		return (0);
	stackb = NULL;
	i = 1;
	tab = ft_strdup("");
	while (i < argc)
	{
		if (checkargvide(argv[i]) == 0)
			return (1);
		tab = ft_strjoin(ft_strjoin(tab, argv[i++]), " ");
	}
	tabint = ft_split(tab, ' ');
	if (checkerror(tab, tabint) == 1)
		return (1);
	i = 0;
	while (tabint[i])
		ft_lstadd_back(&linked, ft_lstnew(ft_atoi(tabint[i++])));
	ft_sort(linked, stackb, ft_strlentab(tabint));
}
