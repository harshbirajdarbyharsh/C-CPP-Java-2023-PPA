#include<stdio.h>

void Fun_Value(int No)
{
    No++;
}
void Fun_Address(int *ptr)
{
    (*ptr)++;
}
void Fun_Refrence(int &ref)
{
    Ref++;
}

int main()
{
    int i = 10,j = 10,k = 10;

    Fun_Value(i);
    Fun_Address(&j);
    Fun_Refrence(k);

    printf("Call by Value : i %d\n",i);
    printf("Call by Value : j %d\n",j);
    printf("Call by Value : k %d\n",k);

    return 0;
}