/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:02:56 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:08:45 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_comp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s1) == ft_strlen(s2))
	{
		while (s1[i])
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}

void	instruction(t_list **stacka, t_list **stackb, char *s)
{
	if (ft_comp(s, "pa\n") == 1)
		ft_pa(stacka, stackb, 0);
	else if (ft_comp(s, "pb\n") == 1)
		ft_pb(stacka, stackb, 0);
	else if (ft_comp(s, "ra\n") == 1)
		ft_ra(stacka, 0);
	else if (ft_comp(s, "rb\n") == 1)
		ft_rb(stackb, 0);
	else if (ft_comp(s, "rr\n") == 1)
		ft_rr(*stacka, *stackb, 0);
	else if (ft_comp(s, "rra\n") == 1)
		ft_rra(*stacka, 0);
	else if (ft_comp(s, "rrb\n") == 1)
		ft_rrb(*stackb, 0);
	else if (ft_comp(s, "rrr\n") == 1)
		ft_rrr(*stacka, *stackb, 0);
	else if (ft_comp(s, "sa\n") == 1)
		ft_sa(*stacka, 0);
	else if (ft_comp(s, "sb\n") == 1)
		ft_sb(*stackb, 0);
	else if (ft_comp(s, "ss\n") == 1)
		ft_ss(*stacka, *stackb, 0);
}

void	checker(t_list **stacka, t_list **stackb)
{
	char	*s;

	while (1)
	{
		s = get_next_line(0);
		if (!s)
			break ;
		instruction(stacka, stackb, s);
	}
	if (checksortlist(*stacka) == 0 && ft_lstsize(*stackb) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

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
	checker(&linked, &stackb);
}
