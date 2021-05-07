#include<stdio.h>

int main(void)
{
	int c;
	while((c = getc(stdin)) != EOF)
	{
		if(putc(c,stdout) == EOF)
			printf("put error\n");
	}

	if(c == EOF)
		printf("get error\n");
	return 0;
	

}
