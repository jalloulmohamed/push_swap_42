#include "push_swap.h"
int pos(int top, t_list *stack)
{
    int i ;
    int *tabstack;
    int j;

    tabstack = linked_to_tab(stack);
    j = 0;
    i = 0;
    while(i< ft_lstsize(stack))
    {
        if(tabstack[i] == top)
            j = i;
        i++;
    }
    free(tabstack);
    return(j);
}
int top_of_stack(t_list *stack)
{ 
    int i ;
    int *tabstack;
    int j;

    tabstack = linked_to_tab(stack);
    i = 0;
    j = tabstack[i];
    while(i < ft_lstsize(stack))
    {
        if(tabstack[i] > j)
            j = tabstack[i];
        i++;
    }
    free(tabstack);
    return(j);
}
void push_to_stack_a(t_list **stacka, t_list **stackb,int len)
{
    (void)len;
    while(*stackb)
    {
        if((*stackb)->content == top_of_stack(*stackb) )
            ft_pa(stacka,stackb,1);
        else if(pos(top_of_stack(*stackb),*stackb) < ft_lstsize(*stackb) /2)
            ft_rb(stackb,1);
        else if(pos(top_of_stack(*stackb),*stackb) >= ft_lstsize(*stackb)/2 )
            ft_rrb(*stackb,1);
    }
}