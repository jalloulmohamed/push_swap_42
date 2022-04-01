#include "push_swap.h"

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort_tab(int arr[], int n)
{
    int i ;
    int j;
    int min_idx;
    
    i = 0;
    while ( i < n - 1) 
    {
        min_idx = i;
        j = i + 1;
        while ( j < n)
        {
            if (arr[j] < arr[min_idx])
            min_idx = j;
            j++;
        }
        swap(&arr[min_idx], &arr[i]);
        i++;
    }
}