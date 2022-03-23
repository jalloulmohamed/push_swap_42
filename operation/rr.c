#include "../push_swap.h"
void ft_rr(t_list *linked,t_list *stackb, int p)
{
    if(linked->next && stackb->next)
    {
        ft_ra(&linked,p);
        ft_rb(&stackb,p);
        if(p == 1)
            write(1,"rr\n",3);
    }
}
