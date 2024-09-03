/*
*  Proves that both the child and parent executes concurrently
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
   int cpid = fork();
   if (cpid == 0)
      while(1) printf("x");
   else
      while(1) printf("O");
   return 0;
}
