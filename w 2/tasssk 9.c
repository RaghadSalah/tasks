#include <stdio.h>
#include <stdlib.h>

int main()
{   int x=1,num,c=1;
  printf("enter the number to calculate the factorial   ");
  scanf("%d",&num);
   while(x <= num)
   {
       c = c * x;
       x++;

   }  printf("the factorial of %d  =  %d",num,c);
    return 0;
}
