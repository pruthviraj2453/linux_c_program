#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
	pid_t q;
	q=fork();
	if(q<0)// error
	{
		printf("error");
	}
	else if(q==0)// child process
	{
		printf("child having pid%d \n",getpid());
		printf("My parent's pid is %d \n",getpid());
	}
	else // q>0 parent process
	{
		printf("Parent having pid %d\n",getpid());
		printf("My child's pid is %d\n ",q);	
	}
}
		
