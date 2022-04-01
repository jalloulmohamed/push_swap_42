#include "push_swap.h"

int *linked_to_tab(t_list *stack)
{
    int *tabstack;
    int i;

    i = 0;
    tabstack = malloc(sizeof(int) * ft_lstsize(stack));
    while (stack)
    {
        tabstack[i] = stack->content; 
        i++;
        stack = stack->next;
    }
    return (tabstack);
}