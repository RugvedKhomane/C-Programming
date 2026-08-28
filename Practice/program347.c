//position = 12 & 23 bit that bit on then off this bit
#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    
    UINT iMask = 0x00000084;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);
 
    iNo = iNo ^ iMask;

    printf("Updated number : %d\n",iResult);

    return 0;
}