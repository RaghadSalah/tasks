#include <stdio.h>
#include <stdlib.h>
 int x,y;
int main()
{   printf("enter the first number ");
scanf("%d",&x);
printf("enter the second number  ");
scanf("%d",&y);
printf(" before swapping n1 = %d , n2 = %d\n",x,y);
 swapp(&x,&y);
 printf(" after swapping n1 = %d , n2 = %d ",x ,y);
    return 0;
}
int swapp( int *c ,int *n)
{   int u;
    u = *c;
    *c = *n;
    *n = u;

}
