#include <stdio.h>
#include <string.h>
char *str_list[3] =
{
 "This is 1st string",
 "This is 2nd string",
 "This is 3rd string",
};
int main()
{
 for (int i = 0;i < 3; i++)
 {
    printf("%s\n", str_list[i]);
 }
 return 0;
}