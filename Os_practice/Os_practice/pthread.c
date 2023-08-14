#include<stdio.h> 
#include<unistd.h>
#include<pthread.h>
void *fun1()
{
	printf("Inside the thread function");
	for(int i=0;i<6;i++)
	{
		printf("%d\n",i);
		sleep(1);
	}
}

int main()
{
	pthread_t thread1;
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_join(thread1,NULL);
	printf("Inside the main funciton");
	for(int i=30;i<34;i++)
	{
		printf("%d\n",i);
		sleep(2);
	}
}
