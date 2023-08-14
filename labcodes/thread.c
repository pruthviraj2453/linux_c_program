#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_function(void *arg);
int i,n,j;
pthread_t a_thread; //thread declaration
pthread_create(&a_thread, NULL, thread_function, NULL); //thread creation
pthread_join(a_thread,NULL); //process waits for threads to finish. Comment to see changes
printf("Main\n");
for(j=15;j<20;j++){
printf("%d\n",j);
sleep(1);
}
}
void *thread_function(void *arg){
printf("Hey I am a thread\n");
for(i=0;i<10;i++)
{
printf("%d\n",i);
sleep(1);
}
}
//gcc thread.c - lpthread
