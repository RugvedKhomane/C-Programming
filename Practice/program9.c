#include <stdio.h>

float AddTwoNumbers(
                        float fNo1,           // First Input
                        float fNo2            //Second Input
                    )
{
    float fAns = 0.0f;                        //Variable To store result
    fAns = fNo1 + fNo2;                       //Perform Addition
    return fAns;
}

int main()
{
    float fValue1 = 0.0f;                      //To store first input
    float fValue2 = 0.0f;                      //To store second input   
    float fResult = 0.0f;                      //To store the Result

    printf("First number is : ");
    scanf("%f",&fValue1);

    printf("Second number is : ");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1, fValue2); 

    printf("Addition is : %f\n",fResult);


    return 0;
}