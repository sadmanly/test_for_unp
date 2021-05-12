#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>


int main(void)
{
	struct stat stat_buff;
	if(stat("test",&stat_buff) < 0)
		printf("stat error");
	if(chmod("test",stat_buff.st_mode | S_ISGID | S_ISUID | S_ISVTX) < 0)
		printf("chmod error");
	exit(0);

}

