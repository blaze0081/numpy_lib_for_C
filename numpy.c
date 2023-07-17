#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Create

int* np_full_1D(int x, int n) {
    int* arr = (int*)malloc(x * sizeof(int));  // Allocate memory for the array

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < x; i++) {
        arr[i] = n;  // Assign each element to 0
    }

    return arr;  // Return the generated array
}