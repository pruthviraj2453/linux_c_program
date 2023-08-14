#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	pid_t p1, p2;
	p1=fork();
	if(p1==0)
	{
		printf("PID of child p1 is %d\n",getpid());
		printf("PID of parent of p1 is %d\n",getppid());
	}
	else
	{
		wait(NULL);
		p2=fork();
		if(p2==0)
		{
			printf("PID of 2nd child p2 is %d\n",getpid());
			printf("PID of parent of p2 is %d\n",getppid());
		}
		else
		{
			wait(NULL);
			printf("PID of the parent process is %d\n",getpid());
		}
	}
}
