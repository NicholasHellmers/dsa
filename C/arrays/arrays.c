#include <stdio.h>
#include <stdlib.h>

#include "arrays.h"

void print_list(int *list_to_print, int size)
{
        for (int i = 0; i < size - 1; i++)
                printf("%d ", list_to_print[i]);
        printf("%d\n", list_to_print[size - 1]);
}

int main()
{       
        int *to_be_sorted = (int*) malloc(5 * sizeof(int));
        to_be_sorted[0] = 5;
        to_be_sorted[1] = 2;
        to_be_sorted[2] = 4;
        to_be_sorted[3] = 2;
        to_be_sorted[4] = 7;
        print_list(to_be_sorted, 5);
        
        insertion_sort(to_be_sorted, 5);

        print_list(to_be_sorted, 5);
        
        return 0;
}