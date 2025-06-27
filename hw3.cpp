
#include <stdio.h>
#define FOR(i, x, y) for(int i = x;i <= y; i++)
#define RE(i, x, y) for(int i = y; i >= x;i --)
#define maxN 100
int arr_2d_mutiply(int arr1[][maxN], int arr2[][maxN], int arr_col, int arr_row, int res[][maxN]);

int main()
{
    int row = 3, col = 3;
    int a[maxN][maxN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }, b[maxN][maxN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    } ;
    int result[maxN][maxN]={};
    arr_2d_mutiply( a,  b, col, row,  result);
    FOR(i, 0, row - 1)
    {
        FOR(j, 0, col - 1)
        {
             printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
 ----------MULTIPLY 2D ARRAYS ---------------
Parameters:
-   *arr1     : the first array
-   *arr2     : the second array
-   arr_col  : the colums of the arrays
-   arr_row  : the rows of the arrays
-   *res      : the result array

Function:
-   Multiplies each element of the first array with the corresponding element 
    in the second array (i.e., res[i][j] = arr1[i][j] * arr2[i][j]). The arr_col and arr_row indicate for the size include arr_col colums and arr_row rows of res.
-   The resulting values are stored in *res.
*/
int arr_2d_mutiply(int arr1[][maxN], int arr2[][maxN], int arr_col, int arr_row, int res[][maxN]){
    FOR(i, 0, arr_row - 1)
    {
        FOR(j, 0, arr_col - 1)
        {
             res[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
    return 0;
}
