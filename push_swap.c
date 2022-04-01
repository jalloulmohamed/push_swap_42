#include "push_swap.h"
#include <stdio.h>

int checkcar(char *tab)
{
    int i;

    i = 0;
    while(tab[i])
    {
        if(ft_isdigit(tab[i]) == 0)
            return(1);
        i++;
    }
    return (0);
}
int checkdouble(char **tabint)
{
    int i;
    int j;
    int k;

    k = ft_strlentab(tabint);
    i = 0;
    while(i < k)
    {
        j = i +1;
        while(j < k)
        {
            if(ft_atoi(tabint[i]) == ft_atoi(tabint[j]) || ft_atoi(tabint[i]) > 2147483647 || ft_atoi(tabint[i]) < -2147483647)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{    
    char *tab;
    int i;
    char **tabint;
    t_list *linked;
    t_list *stackb;

    if (argc == 1)
        return(0);
    stackb = NULL;
    i = 1;
    tab = ft_strdup("");
    while(i < argc)
    {
        tab=ft_strjoin(tab , argv[i]);
        tab = ft_strjoin(tab , " ");
        i++;
    }
    tabint = ft_split(tab,' ');
    
    if(checkcar(tab) == 1 || checkdouble(tabint) == 1)
    {
        write(1,"ERROR",5);
        return(1);
    }
    if(checksort(tabint) == 0)
        return (1);
    i = 0;
    while(tabint[i])
    {
        ft_lstadd_back(&linked,ft_lstnew(ft_atoi(tabint[i])));
        i++;
    }
    ft_sort(linked,stackb,ft_strlentab(tabint));
}