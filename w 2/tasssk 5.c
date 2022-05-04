#include <stdio.h>
#include <stdlib.h>

int main()
{     int x,c,v;
     printf("enter the first number\n");
     scanf("%d",&x);
     printf("enter the second number\n");
     scanf("%d",&c);
      printf("enter the third number\n");
     scanf("%d",&v);
     if(x>c&&x>v)
        printf("the maximum number is %d",x);
     else if(c>x&&c>v)
        printf("the maximum number is %d",c);
     else if(v>x&&v>c)
        printf("the maximum number is %d",v);
        return 0;
}
