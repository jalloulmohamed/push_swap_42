#include "../push_swap.h"
void ft_pb(t_list **stacka, t_list **stackb, int p)
{
    t_list *tem;
    
    if(p == 1)
        write(1,"pb\n",3);
    if (!*stackb)
    {
        *stackb = *stacka;
        (*stacka)= (*stacka)->next;
        (*stacka)->prev = NULL;
        (*stackb)->next = NULL;  
        return ;
    }
    if((*stacka)->next)
    {
        tem = *stacka;
        (*stacka) = (*stacka)->next;
        (*stacka)->prev = NULL;
        tem->next = *stackb;
        (*stackb)->prev = tem;
        *stackb = tem;
    }
    else{
        (*stacka)->next = *stackb;
        (*stackb)->prev = *stacka;
        *stackb = *stacka;
        *stacka = NULL; 
    }
}