#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node*next;
};

int main()
{
    struct node obj1, obj2, obj3;    

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;


    printf("%u\n",&obj1);                //100(Address)
    printf("%u\n",&obj2);                //200(Address)
    printf("%u\n",&obj3);                //300(Address)

    printf("%u\n",obj1.next);            //200(Address)
    printf("%u\n",obj2.next);            //300(Address)
    printf("%u\n",obj3.next);            //0(Address)

    printf("%d\n",obj1.data);             //11(Data)
    printf("%d\n",obj1.next->data);       //21(Data)
    printf("%d\n",obj1.next->next->data); //51(Data)

    return 0;
}