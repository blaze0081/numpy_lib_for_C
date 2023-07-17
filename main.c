#include <stdio.h>
#include<stdlib.h>
#include "numpy.h"

int main() 
{
    //int size = 10;
    int* zeroArray = np_full_1D(10, 8);
    
    // zeroArray[4]=5;
    // printf("%d\n", zeroArray[4]);

        for (int i = 0; i < 10; i++) {
            printf("%d \n", zeroArray[i]);  // Print each element of the array
        }

    return 0;
}
