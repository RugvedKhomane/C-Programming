#include<stdio.h>
//Error due to lib 
int main()
{

    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    
    //step 1 : Accept the number of elements
    priintf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //step 2 :Allocate the memory
    Brr = (int *)malloc(iLength * sizeof(int));

    //step 3 :Accept the values from user
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //step 4 : Use the memory(LOGIC)

    //step 5 :Deallocate the memory
    free(Brr);

    
    return 0;
}