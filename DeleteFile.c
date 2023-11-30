
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
   unlink("Marvellous.txt");

    printf("file deleted successfully...\n");
    
    return 0;
}


// O_RDONLY  : READ
// O_WRONLY  : WRITE
// O_RDWR  : READ + Write