#include<stdio.h>
#include<stdlib.h>
#include<wait.h>
#include<unistd.h>

int killt()
{
    int pid = 0;

    if((pid = fork()) < 0)
        printf("fork error\n");

    else if(pid == 0)
    {
        printf("child\n");   
    }
    else
    {
        printf("parent\n");  
    }
    
    return pid;
}

int main(int argc,char** argv)
{

    int pid = killt();


    printf("%d\n",pid);

    return 0;
}