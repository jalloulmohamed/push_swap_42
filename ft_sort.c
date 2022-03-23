#include "push_swap.h"
void ft_sort(t_list *stacka, t_list *stackb,int len)
{
    int *sortlst;

    if(len == 3)
        sorttre(&stacka);
    else if( len == 5 )
        sortfiv(&stacka,&stackb);
    else
    {
        sortlst = ft_longlist(stacka);
        sortall(&stacka,&stackb,sortlst,len);
    }
    // while(stacka)
    // {
    //     printf("\n#%d#\n",(stacka)->content);
    //     stacka = (stacka)->next;
    // }
    //     while(stackb)
    // {
    //     printf("\n@%d@\n",(stackb)->content);
    //     stackb = (stackb)->next;
    // }


}