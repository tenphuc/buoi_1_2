#include <stdio.h>
#include <string.h>
#define FOR(i, x, y) for(int i = x;i <=y; i++)
#define RE(i, x, y) for(int i = y; i>= x;i --)
#define maxN 1000
int char_reverse(char *s);

int main()
{
    char c[maxN];
    fgets(c, sizeof(c), stdin);
    c[strlen(c) - 1] = '\0';
    char_reverse(c);
    printf("%s", c);
    return 0;
}
/*
----------FIND THE CHAR A AND REPLACE BY THE CHAR B---------------
Paramaters:
-   *s      : the string 
Function:
-   The output is the revese of the string s . The ouput is 0 if the function not error. 
*/
int char_reverse(char *s)
{
    char temp;
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        left ++;
        right --; 
    }
    return 0;
}