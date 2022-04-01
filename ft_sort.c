#include "push_swap.h"
void ft_sort(t_list *stacka, t_list *stackb,int len)
{
    int f;

    f = 5;
    if (len == 500)
        f = 10;
    if(len == 3)
        sorttre(&stacka);
    else if( len == 5 )
        sortfiv(&stacka,&stackb);
    else
    {   
        sortall(&stacka,&stackb,len,f);   
    }
}