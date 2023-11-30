
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystems";
    int Ret = 0;
    
    fd = open("Marvellous.txt",O_RDWR);

    Ret = write(fd,Arr,22);  // (kashat lihayach,kay lihayach,kiti lihayach)
    
    printf("%d bytes gets written in the file\n",Ret);

    close(fd);
    return 0;
}


// O_RDONLY  : READ
// O_WRONLY  : WRITE
// O_RDWR  : READ + Write