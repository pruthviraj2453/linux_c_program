// sem_t, sem_init(), sem_wait(), sem_post()

#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<semaphore.h>

int shared=1;
sem_t s;

void *fun1()
{
        sem_wait(&s);
	int x=shared;
	printf("Thread 1 read's the shared value as %d,\n",x);
	x++;
	printf("Value incremented locally as %d\n",x);
	sleep(1);
	shared=x;
	printf("Value of shared variable updated by thread 1 as %d\n",x);
	sem_post(&s);
}
void *fun2()
{
	sem_wait(&s);
	int y=shared;
	printf("Thread 2 read's the shared value as %d,\n",y);
	y--;
	printf("Value decremented locally as %d\n",y);
	sleep(1);
	shared=y;
	printf("Value of shared variable updated by thread 2 as %d\n",y);
	sem_post(&s);
}

int main()
{
	sem_init(&s,0,1);
	pthread_t thread1,thread2;
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("Final value of shared variable is %d\n",shared);
}
