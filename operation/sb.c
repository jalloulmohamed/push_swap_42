#include "../push_swap.h"
void ft_sb(t_list *linked, int p)
{
    if(linked->next)
    {
        int tem;
        tem = linked->content;
        linked->content = linked->next->content;
        linked->next->content = tem;
        if(p == 1)
            write(1,"sb\n",3);
    }
}