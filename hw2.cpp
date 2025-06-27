#include <stdio.h>
#define FOR(i, x, y) for(int i = x;i <=y; i++)
#define RE(i, x, y) for(int i = y; i>= x;i --)
#define maxN 100
int arr_multiply(int *arr1, int *arr2, int arr_size, int *res);

int main()
{
    int n = 3;
    int a[maxN] = {1, 2, 3}, b[maxN] = {1, 2, 3};
    int result[maxN] = {};
    arr_multiply(a, b, n, result);
    FOR(i , 0, n-1)
    {
        printf("%d ",result[i]);
    }
    return 0;
}

/*
 ----------MULTIPLY ARRAYS---------------
Parameters:
-   *arr1     : the first array
-   *arr2     : the second array
-   arr_size  : the size of the arrays
-   *res      : the result array

Function:
-   Multiplies each element of the first array with the corresponding element 
    in the second array (i.e., res[i] = arr1[i] * arr2[i]), from index 0 to arr_size - 1.
-   The resulting values are stored in *res. The ouput is 0 if the function not error. 
*/
int arr_multiply(int *arr1, int *arr2, int arr_size, int *res)
{
    FOR(i, 0, arr_size - 1)
    {
        res[i] = arr1[i] * arr2[i];
    }    
    return 0;
}