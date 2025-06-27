#include <stdio.h>
#include <string.h>
#define FOR(i, x, y) for(int i = x;i <=y; i++)
#define RE(i, x, y) for(int i = y; i>= x;i --)
#define maxN 1000

int char_find_a_re_b(char *s,char char1, char char2);

int main ()
{
    char c[maxN] , a, b;
    scanf("%c %c", &a, &b);
    getchar();
    fgets(c, sizeof(c), stdin);
    c[strlen(c) - 1] = '\0';
    char_find_a_re_b(c, a, b);
    printf("%s", c);
    return 0;
}
/*
----------FIND THE CHAR A AND REPLACE BY THE CHAR B---------------
Paramaters:
-   *s      : the string contain the character a 
-   char a  : the character a 
-   char b  : the character b

Function:
-   find the char a in the string s and replace it by the char b. The ouput is 0 if the function not error. 
*/
int char_find_a_re_b(char *s,char char1, char char2)
{
    FOR(i, 0, strlen(s))
    {
        if(s[i] == char1)
        {
            s[i] = char2;
        }
    }
    return 0;
}