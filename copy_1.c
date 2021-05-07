#include<stdio.h>
#define BUFFSIZE 4096
int main(void)
{
	int    n;
	char   buff[BUFFSIZE];
	while((n = read(0,buff,BUFFSIZE)) > 0)
		if(write(1,buff,n) != n)
			printf("write error\n");
	if(n < 0)
		printf("read_error\n");
	return 0;
}


