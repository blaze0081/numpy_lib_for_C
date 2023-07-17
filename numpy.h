/*This library is written for the C language to use Numpy like operations*/
int* np_zeros(int size[]);
int* np_zeros_1D(int x);
int** np_zeros_2D(int x, int y);

int* np_ones(int size[]);
int* np_ones_1D(int x);
int** np_ones_2D(int x, int y);

int* np_full(int size[], int number);
int* np_full_1D(int x, int number);
int** np_full_2D(int x, int y, int number);

int check_dim(int arr[]);
int np_add(int a[], int b[], int n);
int np_sub(int a[], int b[], int n);
int np_multi(int a[], int b[], int n);
int np_div(int a[], int b[], int n);
int np_dot(int a[], int b[], int n);
int np_sort(int a[], int n);