#include<unistd.h>
#include<fcnt1.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
	int n,fd;
	char buf[50];
 	fd=open("test.txt",)_RDONLY);
	n=read(fd,buf,50);
	write(1,buf,10);
}
