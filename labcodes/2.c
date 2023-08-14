#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int fd1,fd2,n;
	char arr[25];
	fd1=open("f1.txt",O_RDONLY);
	fd2=open("f2.txt",O_WRONLY|O_APPEND);
	n=read(fd1,arr,20);
	write(fd2,arr,n);
}
