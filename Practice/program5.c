/*
    Algorithm
    START
        Accept first number as No1
        Accept second number as No2
        Perform Addition of NO1 And No2
        Display the Result    
    STOP
*/

#include <stdio.h>

int main()
{
    float i,j,k;

    printf("First number is : ");
    scanf("%f",&i);

    printf("Second number is : ");
    scanf("%f",&j);

    k = i+j;
    printf("Addition is : %f\n",k);


    return 0;
}