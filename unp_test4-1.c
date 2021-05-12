#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>


int main(int argc,char* argv[])
{
	int i = 1;
	struct stat buff;
	for(;i < argc;i++)
	{
		printf("%s : ",argv[i]);
		if(lstat(argv[i],&buff) < 0)
		{
			printf("error\n");
			continue;
		}
		if(S_ISREG(buff.st_mode))
			printf("regular\n");
		else if(S_ISDIR(buff.st_mode))
			printf("directory\n");
		else if(S_ISCHR(buff.st_mode))
			printf("char\n");
		else if(S_ISBLK(buff.st_mode))
			printf("block\n");
		else if(S_ISLNK(buff.st_mode))
			printf("link\n");
		else if(S_ISSOCK(buff.st_mode))
			printf("sock\n");
		else if(S_ISFIFO(buff.st_mode))
			printf("pipe\n");
		else
			printf("unknown\n");

	}


	return 0;
}
