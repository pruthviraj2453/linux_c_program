#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void *fun1();
void *fun2();
int com=1;
int main()
{
pthread_t thread1,thread2;
pthread_create(&thread1,NULL,fun1,NULL);
pthread_create(&thread2,NULL,fun2,NULL);
pthread_join(thread1,NULL); //Process waiting for thread to complete
pthread_join(thread2,NULL); //Process waiting for thread to complete
printf("Final value of com is %d\n",com);
}
void *fun1()
{
int x;
x=com;
printf("Thread1 reads the value of com as %d\n",x);
x++;
printf("Local updation by thread1: %d\n",x);
sleep(1);
com=x;
printf("Value of com variable updated by thread1 is: %d\n",com);
}
void *fun2()
{
int Y;
Y=com;
printf("Thread2 reads the value of com as %d\n",Y);
Y--;
printf("Local updation by thread2: %d\n",Y);
sleep(1);
com=Y;
printf("Value of com variable updated by thread2 is: %d\n",com);
}
