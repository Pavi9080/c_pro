#include "head.h"
int main()
{
	int x=5,y=10;
	printf("before x=%d,y=%d\n",x,y);
	swap(&x,&y);
	printf("after x=%d,y=%d",x,y);
	return 0;
}

