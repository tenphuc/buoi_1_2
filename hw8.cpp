#include <stdio.h>
#include <string.h>
char *split(char *str)
{
 // [TODO]

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            if( i == 0 || i == strlen(str) - 1)
            {
                return NULL;
            }
            else
            {
                str[i]='\0';
                return &str[i+1];
            }
           
        }

    }
    return NULL;
}
int main()
{
 char *res_str;

 // Case 1:
 char str_1[] = "Hello World";
 printf("\n=====\n");
 printf("Case 1: str_1 = %s\n", str_1);
 res_str = split(str_1);
 printf("str_1 = %s\n", str_1);
 if (res_str != NULL)
 printf("res_str = %s\n", res_str);
 else
 printf("No more string behind ' ' or string do not have ' '");
 // Case 2:
 char str_2[] = "Hello ";
 printf("\n=====\n");
 printf("Case 2: str_2 = %s\n", str_2);
 res_str = split(str_2);
 printf("str_2 = %s\n", str_2);
 if (res_str != NULL)
 printf("res_str = %s\n", res_str);
 else
 printf("No more string behind ' ' or string do not have ' '\n");
 // Case 2:
 char str_3[] = "Hello ";
 printf("\n=====\n");
 printf("Case 3: str_3 = %s\n", str_3);
 res_str = split(str_3);
 printf("str_3 = %s\n", str_3);
 if (res_str != NULL)
 printf("res_str = %s\n", res_str);
 else
 printf("No more string behind ' ' or string do not have ' '\n");
 return 0;
}