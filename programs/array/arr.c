#include<stdio.h>
int main()
{
	int ar[] = {1,2,3,4,5};
	int i,j,temp;
	while (i<5)
	{
		i++;
		printf("%d",ar[i]);
		i=0,j=1;
		while(i<j)
		{
			i++;
			j--;
			temp = ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
		printf("%d",ar[i]);
	}
	return 0;
}
