/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:02:43 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/02 22:12:55 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}t_list;

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
size_t	ft_strlentab(char **str);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
long	ft_atoi(const char *str);
int		ft_lstsize(t_list *lst);
int		main(int argc, char **argv);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_sa(t_list *linked, int p);
void	ft_sb(t_list *linked, int p);
void	ft_ss(t_list *linked, t_list *stackb, int p);
void	ft_ra(t_list **linked, int p);
void	ft_rb(t_list **linked, int p);
void	ft_rr(t_list *linked, t_list *stackb, int p);
void	ft_rra(t_list *linked, int p);
void	ft_rrb(t_list *linked, int p);
void	ft_rrr(t_list *linked, t_list *stackb, int p);
void	ft_pa(t_list **linked, t_list **stackb, int p);
void	ft_pb(t_list **linked, t_list **stackb, int p);
void	ft_sort(t_list *stacka, t_list *stackb, int len);
int		checkerror(char *tab, char **tabint);
void	sortall(t_list **stacka, t_list **stackb, int len, int div);
void	sorttre(t_list **stacka);
void	sortfiv(t_list **stacka, t_list **stackb, int len);
void	sort_tab(int arr[], int n);
int		*linked_to_tab(t_list *stack);
void	push_to_stack_a(t_list **stacka, t_list **stackb, int len);
char	*ft_strdup_line(const char *s1);
int		ft_strchr(const char *s, int c);
char	*get_next_line(int fd);
int		checksortlist(t_list *linked);

#endif
