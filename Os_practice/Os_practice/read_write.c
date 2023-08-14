// man 2 write 
// write to the file descriptor
// parameters: file descriptor, data, size of data
// 

#include<unistd.h>
int main()
{	
	
	write(1,"hello\n",6);
	char buffer[30];
	
	int n=read(0,buffer,30);
	write(1,buffer,n);
}
