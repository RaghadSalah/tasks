#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,count;
printf("enter the number  ");
scanf("%d",&x);

do
{
    x=x/10;
    ++count;
}while(x != 0);
printf("the number of digits is %d", count);

}
