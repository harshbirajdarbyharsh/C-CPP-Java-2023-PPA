#include<stdio.h>

int main()
{
   int arr[6] = {10,20,30};
   int no = 2;

   printf("%d",arr[0]);
   printf("%d",arr[no]);
   printf("%d",arr[3-1]);
   printf("%d",arr);
   printf("%d",arr+1);
   printf("%d",(&arr)+1);
   printf("%d",arr+3);
   printf("%d",&(arr[3]));
   printf("%d",arr[4]);
   printf("%d",&(arr[5]));
   printf("%d",2[arr]);

   return 0;

}