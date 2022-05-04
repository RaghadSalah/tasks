#include <stdio.h>
#include <stdlib.h>

int multi(int a[] , int b[])
{
    int i ,sum=0;
    for(i=0; i<5; i++)
    {
        sum = sum + (a[i] * b[i]);
    }
    return sum;
}

int main()
{
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10};
        printf("the summation = %d ",multi(a,b));

    return 0;
}
