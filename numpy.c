#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int* np_zeros(int size[]);
int* np_zeros_1D(int x);
int** np_zeros_2D(int x, int y);

int* np_ones(int size[]);
int* np_ones_1D(int x);
int** np_ones_2D(int x, int y);

int* np_full(int size[], int number);
int* np_full_1D(int x, int number);
int** np_full_2D(int x, int y, int number);

int dim_arr(int arr[]);

//Create

int* np_zeros(int size[]) {
    int num = dim_arr(size);

    switch(num) {
        case 1:
            return np_zeros_1D(size[0]);
        case 2:
            return *np_zeros_2D(size[0], size[1]);

        default:
            printf("Give valid dimension in np_zeros");
            return 0;
    }
}

int* np_zeros_1D(int x) {
    int* arr = (int*)malloc(x * sizeof(int));  // Allocate memory for the array

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < x; i++) {
        arr[i] = 0;  // Assign each element to 0
    }

    return arr;  // Return the generated array
}

int** np_zeros_2D(int x, int y) {
    int** arr = (int**)malloc(x * sizeof(int*));  // Allocate memory for the rows

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < x; i++) {
        arr[i] = (int*)malloc(y * sizeof(int));  // Allocate memory for each row's columns

        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");

            // Free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);

            return NULL;  // Return NULL if memory allocation fails
        }

        for (int j = 0; j < y; j++) {
            arr[i][j] = 0;  // Assign each element to 0
        }
    }
    return arr;  // Return the generated 2D array
}

int* np_ones(int size[]) {
    int num = dim_arr(size);

    switch(num) {
        case 1:
            return np_ones_1D(size[0]);
        case 2:
            return *np_ones_2D(size[0], size[1]);

        default:
            printf("Give valid dimension in np_ones");
            return 0;
    }
}

int* np_ones_1D(int x) {
    int* arr = (int*)malloc(x * sizeof(int));  // Allocate memory for the array

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < x; i++) {
        arr[i] = 1;  // Assign each element to 0
    }

    return arr;  // Return the generated array
}

int** np_ones_2D(int x, int y) {
    int** arr = (int**)malloc(x * sizeof(int*));  // Allocate memory for the rows

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < x; i++) {
        arr[i] = (int*)malloc(y * sizeof(int));  // Allocate memory for each row's columns

        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");

            // Free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);

            return NULL;  // Return NULL if memory allocation fails
        }

        for (int j = 0; j < y; j++) {
            arr[i][j] = 1;  // Assign each element to 0
        }
    }
    return arr;  // Return the generated 2D array
}


int* np_full(int size[], int number) {
    int num = dim_arr(size);

    switch(num) {
        case 1:
            return np_full_1D(size[0], number);
        case 2:
            return *np_full_2D(size[0], size[1], number);

        default:
            printf("Give valid dimension in np_num");
            return 0;
    }
}

int* np_full_1D(int x, int number) {
    int* arr = (int*)malloc(x * sizeof(int));  // Allocate memory for the array

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < x; i++) {
        arr[i] = number;  // Assign each element to 0
    }

    return arr;  // Return the generated array
}

int** np_full_2D(int x, int y, int number) {
    int** arr = (int**)malloc(x * sizeof(int*));  // Allocate memory for the rows

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < x; i++) {
        arr[i] = (int*)malloc(y * sizeof(int));  // Allocate memory for each row's columns

        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");

            // Free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);

            return NULL;  // Return NULL if memory allocation fails
        }

        for (int j = 0; j < y; j++) {
            arr[i][j] = number;  // Assign each element to 0
        }
    }
    return arr;  // Return the generated 2D array
}



// Read 
int dim_arr(int arr[]){
    return sizeof(*arr)/sizeof(int);
}

