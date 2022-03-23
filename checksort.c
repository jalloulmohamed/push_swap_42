#include "push_swap.h"
int checksort(char **tabint)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while(tabint[j])
    {
        if(ft_atoi(tabint[i]) < ft_atoi(tabint[j]))
        {
            i++;
            j++;
        }    
        else
            return(1);
        
    }
    return(0);
}