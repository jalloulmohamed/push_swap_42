#include "push_swap.h"
void sorttre(t_list **stacka)
{
    int a;
    int b;
    int c;

    a = (*stacka)->content;
    b = (*stacka)->next->content;
    c = (*stacka)->next->next->content;
    if(a > b && a < c  && b < c)
        ft_sa(*stacka,1);
    else if(a > b && a> c && b > c)
    {
        ft_sa(*stacka,1);
        ft_rra(*stacka,1);
    }
    else if(a > b && a > c && b < c)
        ft_ra(stacka,1);
    else if(a < b && a < c && b > c)
    {
        ft_sa(*stacka,1);
         ft_ra(stacka,1);
    }
    else if(a < b && a > c && b > c)
        ft_rra(*stacka,1);
}