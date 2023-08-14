#include<stdio.h>

#include<unistd.h>

#include<pthread.h>

void *thread_fun(void *arg);

int main()

{

	pthread_t thread1;
	int A[2]={2,4};
	pthread_create(&thread1,NULL,thread_fun,(void *)num);
	//             THREAD,attributes,ThreadFunction, Parameters To Function

	void *R
	pthread_join(thread1,&R); //Process waiting for thread to complete
			//Return Value
	printf("Back to main process\n");
	printf("Result: %s",(char *)R);

	return 0;

}

void *thread_fun(void *arg){

	printf("Inside thread\n");
	int *B=arg
	int sum = B[0]+B[1];
	printf("%d),sum);
	pthread_exit("Done");

}
