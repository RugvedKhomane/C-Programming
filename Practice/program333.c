//accept no from user and Accept position from user and toggle that poistion

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iPos = 0;

    printf("Enter the Bit position: \n");
    scanf("%d",&iPos);

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = iMask << (iPos - 1);
    
    iMask = 0x400;

    iNo = iNo ^ iMask;

    printf("Updated number : %d\n",iNo);

    return 0;
}