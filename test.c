#include<stdio.h>
#include<stdlib.h>
/*
    for ...
*/
#ifdef MUL
#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<time.h>
int kill(char* k,int num,...)
{
    printf("aaaa %s\n",k);
    va_list test;
    va_start(test, num);
    
    int c = va_arg(test,int);
    char*  d = va_arg(test,int);
    int e = va_arg(test,int);
    int f = va_arg(test,int);
    printf("%d , %s , %d , %d\n",c,d,e,f);
    va_end(test);

}

int main()
{
    kill("yaya",4,1,"fff",3,4);
}
#endif

#ifdef TIME
int main()
{
    char buff[64];
    struct timeval now_time;
    struct tm*  tv_sec_time;
    if(gettimeofday(&now_time,NULL) != 0)
        printf("gettime error\n");
    tv_sec_time = localtime(&now_time.tv_sec);
    strftime(buff,64,"%F %T",tv_sec_time);
    printf("%s.%u\n",buff,now_time.tv_usec);
}


int main(){
	FILE* 	fp;
	char    c;
	fp = fopen("./test","rw");
	c = fgetc(fp);
	printf("%c",c);
	ungetc('p',fp);
	c = fgetc(fp);
	printf("%c",c);
	
}




int main()
{

    char a[10];
    int i = 0;
    
  
    while(1)
    {
        a[i] = fgetc(stdin);
        fgetc(stdin);
        i++;
        if(i>=10)
        {
            break;
        }
    }
    printf("%s",a);

}

#endif

int main()
{
    char*  a[2];
    a[0] = "test1";
    a[1] = "test2";

    printf("%p %p %p %p %p\n",a,(char*)a + 1,(void*)a+1,(int*)a+1,(int)a+1);

}