//Accept no from user and also take the bit from user and check whether that bit of that number is ON or OFF
#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iAns = 0;
    UINT iPos = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo);

    printf("Enter the Position : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos -1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n");
    }
    
    return 0;
}