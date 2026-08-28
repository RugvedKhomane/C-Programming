//accept the number from user and off the 13th bit if it is on 

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0xFFFFEFFF;
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated number : %d\n",iNo);

    return 0;
}