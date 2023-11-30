
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;
    
    fd = open("Marvellous.txt",O_RDWR);

    Ret = read(fd,Arr,10);  // (kashatun vachaychay, kashat vachaych,kiti vachaych)
    
    printf("%d bytes gets read from the file\n",Ret);
    printf("Data is : %s\n",Arr);

    close(fd);
    return 0;
}


// O_RDONLY  : READ
// O_WRONLY  : WRITE
// O_RDWR  : READ + Write