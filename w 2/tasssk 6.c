#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
  printf("the result of 3*4 =  ");
  scanf("%d",&x);
  while(x != 12)
  { printf(" try again\n");
  printf("the result of 3*4 =  ");
  scanf("%d",&x);
    continue;
  } printf("Thanks");


    return 0;
}
