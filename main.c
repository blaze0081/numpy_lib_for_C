#include <stdio.h>
#include<stdlib.h>
#include "numpy.h"

int main() 
{
    //int size = 10;
    int arr_size[] = {10,8};

    int* zeroArray = np_zeros(arr_size);

    // zeroArray[4][5]=5;
    // printf("%d\n", zeroArray[4][5]);

        for (int i = 0; i < arr_size[0]; i++) {
            for (int j = 0; j < arr_size[1]; j++) {
                printf("%d ", zeroArray[i]);  // Print each element of the 2D array
            }
            printf("\n");
        }



    return 0;
}
