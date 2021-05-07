#include<stdio.h>
#include<error.h>

int main(int argc,char* argv[])
{
	fprintf(stderr,"EACCE : %s",strerror(EACCES));
	errno = ENOENT;
	perror(argv[0]);
	return 0;

}
