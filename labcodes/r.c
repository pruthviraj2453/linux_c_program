#include<unistd.h>//header file
int main()
{
	int n;
	char arr[10];
	n=read(0,arr,10);
	write(1,arr,n);
	write(1,"hello from hriday",18);
}

