#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h> 
#include<sys/wait.h>
#define MAXLINE 10000

void sig_int()
{
	printf("ijijijijijijij\n");
}

int main()
{
	char  		buff[MAXLINE];
	int 		pid;
	int  		status;

	if(signal(SIGINT,sig_int) == SIG_ERR)
	{
		printf("signal wrong\n");
	}
	while(fgets(buff,MAXLINE,stdin) != NULL)
	{
		if (buff[strlen(buff) - 1] == '\n')
			buff[strlen(buff) - 1] = '\0'; 

		if((pid = fork()) < 0)
		{
			printf("create error\n");
		}	
		else if(pid == 0)
		{
			int ret = execlp(buff,buff,(char*)0);
			if(ret < 0)
				printf("can't create it\n");
			exit(111);
		}
	
		if(pid = waitpid(pid,&status,0) < 0)
			printf("wait error \n");
		printf("%%");
	}

	return 0;

}

