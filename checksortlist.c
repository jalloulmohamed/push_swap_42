#include "push_swap.h"
int checksortlist(t_list *linked)
{
    
    while(linked)
    {
        if(linked->content < linked->next->content)
        {
            linked= linked->next;
        }    
        else
            return(1);
        
    }
    return(0);
}