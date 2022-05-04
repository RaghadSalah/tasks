#include <stdio.h>
#include <stdlib.h>

int main()
{
     int c, x,num[10];
  printf("enter the number\n");
  scanf("%d",&x);
  printf("the multiplication table of %d :\n",x);
  for(c=0;c<=9;c++)
  {   num[c]=c+1;
      printf("%d  *  %d  =  %d\n",x,num[c],x*num[c]);
  }
    return 0;
}
