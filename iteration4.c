#include<stdio.h>

int main()
{
    int i = 1;
    int count = 0;

    printf("Enter num of times u want to display jay ganesh on screen \n");
    scanf("%d",&count);

    while(i <= count)
    {
        printf("Jay Ganesh...\n");
        i++;
    }

    return 0;
}