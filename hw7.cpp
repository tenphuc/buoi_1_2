#include <stdio.h>
#include <string.h>
#define FOR(i, x, y) for(int i = x;i <=y; i++)
#define RE(i, x, y) for(int i = y; i>= x;i --)
#define maxN 1000
bool str_cmp(char *string1, char* string2);
/*
----------COMPARING THE STRING---------------
Paramaters:
-   *string1   : the string 1 
-   *string 2  : the string 2

Function:
-   The output is '1' if string 1 and string 2 are equal
    and output is '0 if string 1 and string 2 not equal  
*/
bool str_cmp(char *string1, char* string2)
{
    int n = strlen(string1);
    int m = strlen(string2);
    if( n == m)
    {
        FOR(i, 0, n - 1)
        {
            if(string1[i] != string2[i])
            {
                return 1;
            }
        }
    }
    else 
    {
        return 1;
    }
    return 0;
}
int main ()
{
    char c[maxN]="hello", p[maxN]="Hello";
    if(str_cmp(c, p))
    {
        printf("Error");
    }
    else 
    {
        printf("Yup");
    }
    return 0;
}