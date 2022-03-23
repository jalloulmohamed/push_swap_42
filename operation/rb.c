#include "../push_swap.h"
void ft_rb(t_list **linked, int p)
{
    if((*linked)->next)
    {
        t_list *tem;
        t_list *tem1;

        tem = *linked;
        *linked = (*linked)->next;
        tem1 = ft_lstlast(*linked);
        tem1->next = tem;
        tem->prev = tem1;
        tem->next = NULL;       
        if(p == 1)
            write(1,"rb\n",3); 
    }
}