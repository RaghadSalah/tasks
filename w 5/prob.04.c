#include <stdio.h>
#include <stdlib.h>
int sort();
int main()
{   int n;
printf("enter the number of elements: ");
scanf("%d",&n);
    int arr[n];
    printf("enter the elements: \n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}
int sort(int a[],int n)
{
    int swap,*p;
    l1:

    for(int i=0; i<7; i++)
    {
        if(a[i+1] > a[i])
        {
            swap = a[i];
            a[i] = a[i+1];
            a[i+1] = swap;
            goto l1;
        }
    }
    printf("\n the array when sorted is :\n");
    for(p = a+6;p>=a;p--)
        printf("%d ",*p);
}
