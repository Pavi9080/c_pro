#include<stdio.h>
int main(int args,char*argv[])
{
	int n1,n2;
	printf("enter the value of n1: ");
	scanf("%d",&n1);
	printf("enter the value of n2: ");
        scanf("%d",&n2);

	if(n1%2==0)
	{
		while(n1<=n2)
		{
			printf("\n%d\n",n1);
			n1=n1+2;
		}
	}

	else
	{
		n1 = n1++;
		while(n1<=n2)
		{
			n1=n1+2;
			printf("\n%d\n",n1);
		}
	}
	return 0;

}
