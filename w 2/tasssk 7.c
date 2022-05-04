#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,num[10];
float sum=0,ave=0;
printf("enter the ten values \n");
for(x=1;x<=10;x++)
{
    scanf("%d",&num[x]);
    sum = sum + num[x];
    ave = (sum/10);
}  printf("the summation =  %.2f\n",sum);
printf("the average =  %.2f",ave);
    return 0;
}
