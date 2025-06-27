#include <stdio.h>
#include <string.h>
#define FOR(i, x, y) for(int i = x;i <=y; i++)
#define RE(i, x, y) for(int i = y; i>= x;i --)
#define maxN 1000
int char_first(char *s, char character);


int main ()
{
    char c[maxN];
    fgets(c, sizeof(c), stdin);
    c[strlen(c)-1] = '\0';
    FOR(i, 0, strlen(c) - 1)
    {
        if(!char_first(c, c[i]))
        {
            printf("%c ", c[i]);
        }

    }
    return 0;
}
/*
----------CHAR FIRST---------------
Paramaters:
-   *s        : the string contain the character 
-   character : the character that you need to check

Function:
-   The output is '1' if character appear 1 time on the string s
    and output is '0 if the character appear more than 1 time. The ouput is 0 if the function  not error. 
*/
int char_first(char *s, char character)
{
    int cnt = 0;
    FOR(i, 0, strlen(s) - 1)
    {
        if(s[i] == character)++ cnt;
        if(cnt == 2) return 1;
    }
    return 0;
}