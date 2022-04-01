#include "../push_swap.h"
void ft_rrr(t_list *stacka,t_list *stackb, int p)
{
    if(stacka->next && stackb->next)
    {
        ft_rra(stacka,0);
        ft_rrb(stackb,0);
        if(p == 1)
            write(1,"rrr\n",4);
    }
}
