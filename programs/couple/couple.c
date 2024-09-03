#include<stdio.h>
int main(int args,char*argv[])
{
	int n1=2,n2=4,range=30;
	int count=0;
	while(count<30)
	{
		printf("%d %d",n1,n2);
		n1=n1+2;
		n2=n2+4;
		count++;
	}
	return 0;
}
