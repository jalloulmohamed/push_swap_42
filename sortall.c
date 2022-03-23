#include "push_swap.h"
int	ft_strchr(int *s, int c)
{	
    int i;
    i = longlistsort;
    
	while (i)
	{
		if (s[i -1] == c)
			return (1);
		i--;
	}
	return (0);
}


void ft_minmov(t_list *stacka,t_list *stackb ,t_index *index)
{
    int tabstacka[ft_lstsize(stacka)];
    int tabstackb[ft_lstsize(stackb)];
    int tab[ft_lstsize(stackb)][2];
    int conta = sizeof(tabstacka) /sizeof(tabstacka[0]);
    int contb = sizeof(tabstackb) /sizeof(tabstackb[0]);
    int i = 0;
    int j = 0;
    while (stacka)
    {
        tabstacka[i] = stacka->content; 
        i++;
        stacka = stacka->next;
    }
    i= 0;
      while (stackb)
    {
        tabstackb[i] = stackb->content;
        i++;
        stackb = stackb->next;
    }
    i = 0;
    if(tabstackb[j] < tabstacka[i] &&  tabstackb[j] < tabstacka[conta-1])
     {
         index->operation = 1;
           return;
     } 
    if( tabstackb[j] > tabstacka[conta-1] && tabstackb[j] > tabstacka[i])
    {
        index->operation = 2;
        return;
    }  
  
    else
    {  
        int f = 0;
        i = 1;
        while(j< contb)
        {
            while(i < conta)
            {
                if( tabstackb[j] < tabstacka[i])
                {
                    tab[j][0] = i;
                    tab[j][1] = j;
                    f++;
                }  
                i++;
            }
            i = 1;
            j++;
        }

        int min;
        int inde;

        i = 0;
        inde = 0;
        while(i<f)
        {
            min = tab[i][0] + tab[i][1];
            if(tab[i][0] + tab[i][1] < min )
            {
                min = tab[i][0] + tab[i][1];
                inde = i;
            }     
            i++; 
        }
    
        index->indexa = tab[inde][0];
        index->indexb = tab[inde][1];

        index->operation = 3;
    }  
}

void sortall(t_list **stacka , t_list **stackb , int *sortlist,int len)
{
    t_index index;

    index.indexb = 0;
    index.indexa = 1;
    index.operation = 0;
    
    while(len)
    {
        if(ft_strchr(sortlist,(*stacka)->content) == 1)
            ft_ra(stacka,1);
        else
            ft_pb(stacka,stackb,1);
        len--;
    }

    int i = 0;
    int p ;
    int g = 0;
    while(*stackb)
    {
        index.size = ft_lstsize(*stacka);
        // printf("(((((%d))))",index.size);
        ft_minmov(*stacka, *stackb , &index);
        p = index.indexa;
        if(index.operation == 1 || index.operation == 2)
            ft_pa(stacka,stackb,1); 
        else if(index.operation ==3)
        {  
            if(p <= index.size)
            {   while(index.indexa)
                {
                    ft_ra(stacka,1);
                    index.indexa--;
                    i++;
                    g =  1;
                }
            }
            else if(p > index.size)
            {   
                index.indexa = index.size - index.indexa; 
                while(index.indexa)
                {
                    ft_rra(*stacka,1);
                    index.indexa--;
                    i++;
                    g = 2;
                }
            }
            while(index.indexb)
            {
                ft_rb(stackb,1);
                index.indexb--;
                
            }
             ft_pa(stacka,stackb,1);
            while(i)
            {
                if(g == 1)
                    ft_rra(*stacka,1);
                else if(g == 2)
                    ft_ra(stacka,1);
                i--;
            }
        }
        index.operation = 0;
    }
}