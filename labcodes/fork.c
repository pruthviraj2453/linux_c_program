#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
fork();
wait(NULL);
fork();
wait(NULL);
fork();
printf("PID: %d ",getpid());
printf("PPID: %d ",getppid());
return 0;
}
