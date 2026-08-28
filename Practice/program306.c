//Accept number and count the 1 in the binary No
#include<stdio.h>

int main()
{
    int iNo = 0,iCount = 0,iDigit = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
       {
            iCount++;
       }
        iNo = iNo /2;
    }

    printf("count of 1 is : %d",iCount);

    return 0;
}