//accept the number from user and off the 4th bit if it is on 

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0xFFFFFFF7;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid bit poistion\n");
        return iNo;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;


    return iResult;

}

int main()
{
    UINT iValue = 0,iRet = 0,iLocation = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter the Bit position: \n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("Updated Number is : %d\n",iRet);

    return 0;
}