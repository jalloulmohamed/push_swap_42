#include "../push_swap.h"
void ft_rrb(t_list *linked, int p)
{
    if(linked->next)
    {
        t_list *tem;
        tem = ft_lstlast(linked);
        tem->next = linked->next;
        linked->next->prev = tem;
        tem->prev->next = NULL;
        tem->prev = linked;
        linked->next =tem;
        ft_sa(linked ,4);
        if(p == 1)
            write(1,"rrb\n",4); 
    }
}   
