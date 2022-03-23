#include "../push_swap.h"
void ft_pa(t_list **stacka, t_list **stackb, int p)
{
    t_list *tem;

    if(p == 1)
         write(1,"pa\n",3);
    if (!*stacka)
    {
        *stacka = *stackb;
        (*stackb)= (*stackb)->next;
        (*stackb)->prev = NULL;
        (*stacka)->next = NULL;
        return ;
    }
    if((*stackb)->next)
    {
        tem = *stackb;
        (*stackb) = (*stackb)->next;
        (*stackb)->prev = NULL;
        tem->next = *stacka;
        (*stacka)->prev = tem;
        *stacka = tem;
    }
    else{
        (*stackb)->next = *stacka;
        (*stacka)->prev = *stackb;
        *stacka = *stackb;
        *stackb = NULL;
    }
}

