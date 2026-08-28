//Accept number from user and check whether 13th bit of that number is ON or OFF
#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 4096;
    UINT iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("13th bit is ON\n");
    }
    else
    {
        printf("13th bit is OFF\n");
    }
    

    return 0;
}