#include "push_swap.h"
int maxi(int *tab ,int cont)
{
    int j;

    j = 0;
    while(cont > -1)
    {
        if(tab[cont] > j )
            j = tab[cont];
        cont--;
    }
    return (j);
}

int indexmax(int *tab, int k,int cont)
{
    int i;

    i = 0;
    while(cont)
    {
        if(tab[cont -1] == k)
            return(cont-1);
        cont--;
    }
    return(0);
}
int *modfiertab(int *tab,int *tab1,int len)
{
    int j;
    int i;

    i = 1;
    j = 0;
    while(len)
    {
        while(j < i)
        {
            if(tab[i]>tab[j] && tab1[i] < tab1[j] + 1)
            {
                tab1[i]++;
            }
            j++;
        }
        j = 0;
        i++;
        len--;
    }
    return(tab1);
}

int *algolisub(int *tab, int *tab1, int len)
{
    int *tabm;
    int i;
    int k;
    int *lis;

    tabm = modfiertab(tab,tab1,len);
    i = 0;
    k =maxi(tab1 ,len-1);
    lis = (int *)malloc(sizeof(int) * (k));
    while (k)
    {
        len = indexmax(tab1,k,len);
        lis[i] = tab[len];
        i++;
        k--;
        longlistsort++;
    }
    return(lis);
}

int *ft_longlist(t_list *stacka)
{
    int i;
    int j = 0; 
    i = ft_lstsize(stacka);
    int lista[i];
    int tab[i];
    while(j<i)
    {
        tab[j] = 1;
        lista[j] = stacka->content;
        j++;
        stacka = stacka->next;
    }
    return (algolisub(lista,tab,i));
}
