#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

int shared=1;

void *fun1()
{
	int x=shared;
	printf("Thread 1 read's the shared value as %d,\n",x);
	x++;
	printf("Value incremented locally as %d\n",x);
	sleep(1);
	shared=x;
	printf("Value of shared variable updated by thread 1 as %d\n",x);
}
void *fun2()
{
	int y=shared;
	printf("Thread 2 read's the shared value as %d,\n",y);
	y--;
	printf("Value decremented locally as %d\n",y);
	sleep(1);
	shared=y;
	printf("Value of shared variable updated by thread 2 as %d\n",y);
}

int main()
{
	pthread_t thread1,thread2;
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("Final value of shared variable is %d\n",shared);
}
