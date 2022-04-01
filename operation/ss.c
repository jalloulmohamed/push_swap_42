#include "../push_swap.h"
void ft_ss(t_list *stacka,t_list *stackb, int p)
{
    if(stacka->next && stackb->next)
    {
        ft_sa(stacka,0);
        ft_sb(stackb,0);
        if(p == 1)
            write(1,"ss\n",3);
    }
}
