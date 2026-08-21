//Accept n numbers from user and written the smallest number from that numbers

//Time Complexity : O(N)
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
     if(Arr[iCnt] < iMin)
        {
          iMin = Arr[iCnt];
        } 
}
   return iMin;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0,iRet = 0;
   
    
    printf("Enter the Numbers of element : \n");
    scanf("%d",&iLength);

    Brr =(int*)malloc(sizeof(int)* iLength);   

    printf("Enter the Elements: \n");

    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Minimum(Brr,iLength);
    
    printf("Smallest Element is : %d\n",iRet);

    free(Brr);

    return 0;
}