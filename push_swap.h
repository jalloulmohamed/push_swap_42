#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
 int longlistsort;

typedef struct s_list
{
	int			content;
	struct s_list	*next;
    struct s_list	*prev;
}t_list;

typedef struct s_index
{
	int			indexa;
	int			indexb;
	int 		operation;
	int 		size;

}t_index;

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
size_t	ft_strlentab(char **str);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
int	ft_isdigit(int c);
int	ft_atoi(const char *str);
int	ft_lstsize(t_list *lst);
int main(int argc, char **argv);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int	content);
void ft_sa(t_list *linked, int p);
void ft_sb(t_list *linked, int p);
void ft_ss(t_list *linked,t_list *stackb, int p);
void ft_ra(t_list **linked, int p);
void ft_rb(t_list **linked, int p);
void ft_rr(t_list *linked,t_list *stackb, int p);
void ft_rra(t_list *linked, int p);
void ft_rrb(t_list *linked, int p);
void ft_rrr(t_list *linked,t_list *stackb, int p);
void ft_pa(t_list **linked, t_list **stackb, int p);
void ft_pb(t_list **linked, t_list **stackb, int p);
void ft_sort(t_list *stacka, t_list *stackb,int len);
int checksort(char **tabint);
int checksortlist(t_list *linked);
int *ft_longlist(t_list *stacka);
void sortall(t_list **stacka , t_list **stackb , int *sortlist,int len);
void sorttre(t_list **stacka);
void sortfiv(t_list **stacka,  t_list **stackb);


#endif