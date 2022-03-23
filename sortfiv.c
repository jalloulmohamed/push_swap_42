#include "push_swap.h"
int ft_top(t_list *stacka)
{
    int i = stacka->content;
    while(stacka)
    {
        if(i < stacka->content)
            i = stacka->content;
        stacka = stacka->next;
    }
    return (i);
}
int ft_bottom(t_list *stacka)
{
    int i =stacka->content;
    while(stacka)
    {
        if(i > stacka->content)
            i = stacka->content;
        stacka = stacka->next;
    }
    return (i);
}

void sortfiv(t_list **stacka,  t_list **stackb)
{
    int i;
    int j;
    int k;
    (void) stackb;

    j = 0;
    i = ft_top(*stacka); 
    k = ft_bottom(*stacka); 
    while(j< 5)
    {
        if((*stacka)->content == k || (*stacka)->content == i)
            ft_pb(stacka,stackb,1);
        else 
            ft_ra(stacka,1);
        j++;
    }
    if((*stackb)->content < (*stackb)->next->content )
        ft_sb(*stackb,1);
    sorttre(stacka);
    ft_pa(stacka,stackb,1);
    ft_ra(stacka,1);
    ft_pa(stacka,stackb,1);
}
