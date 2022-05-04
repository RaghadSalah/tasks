#include <stdio.h>
#include <stdlib.h>
int Get_Max(int,int);
int main()
{    int x,c;
     printf("enter the first number  ");
     scanf("%d",&x);
     printf("enter the second number  ");
     scanf("%d",&c);
     Get_Max(x,c);
     printf("the maximum number is %d", Get_Max(x,c));

    return 0;
}
int Get_Max(int x, int c)
{
    if( x > c)
        return x;
    else
        return c;
}
