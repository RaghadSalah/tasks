#include <stdio.h>
#include <stdlib.h>
int count=0,f;
int main()
{   int x;
    printf("enter the number to calculate the fibonacci  ");
    scanf("%d",&x);
    int y = x;
    for(f =1;f<=2;f++)
    {  x = x -1;
       count = count + x;
    }
    printf("the fibonacci of %d = %d",y,count);

    return 0;
}
