#include <stdio.h>
#define FOR(i, x, y) for(int i = x;i <=y; i++)
#define RE(i, x, y) for(int i = y; i>= x;i --)
#define maxN 100
int arr_coppy(int *arr, int *arr1, int arr_size);

int main()
{
    int n = 4; 
    int a[maxN] = {1,2,2,3};
    int b[maxN] = {};
    arr_coppy(a, b, n);
    FOR(i, 0, n - 1)
    {
        printf("%d ", b[i]);
    }
    return 0;
}


/*
----------COPPY ARRAY---------------
Paramaters:
-   *arr1  : the source array
-   *arr2 : the destination array
-   arr_size : size of the array

Function:
-   Used for copying data from the source array to the destination array.
    It copies elements with indexes from 0 to arr_size - 1. The ouput is 0 if the function not error. 
*/
int arr_coppy(int *arr1, int *arr2, int arr_size)
{
    FOR(i, 0, arr_size - 1)
    {
        arr2[i] = arr1[i];
    }
    return 0;
}
