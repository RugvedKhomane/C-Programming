#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    end = str;
    
   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = *end;

        start++;
        end++;
   }
}
int main()
{

    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strrev(Arr);

    print("updated String : %s\n");

    return 0;
 }
