#include<stdio.h>

int main()
{

    int Standard = 0;

    printf("Primary School Portal \n");

    printf("Enter your devision :\n");
    scanf("%d",&Standard);
    
    switch(Standard)
    {
        case 1:
             printf("Your exam is at 1 PM");
             break;
        case 2:   
             printf("Your exam is at 2 PM");
             break;
        case 3:
             printf("Your exam is at 3 PM");
             break;
        case 4:
             printf("Your exam is at 4 PM");
             break;  
        default:
             printf("Invalid Standard");
             break;        
    
    }
    return 0;

}
    