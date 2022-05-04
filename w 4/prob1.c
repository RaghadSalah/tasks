#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[20],i,u,a,check,n;
   printf("enter the number of elements:  ");
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {   printf("the number %d =  ",i+1);
        scanf(" %d",&arr[i]);
    }
    printf("enter 0 for ascending or 1 for descending:  ");
    scanf("%d",&u);

if(u == 0)
{

    for(i=0;i<n;i++)
    {   for(check=i+1;check<n;check++)
    {
        if(arr[i]>arr[check])
        {
          a = arr[i];
          arr[i] = arr[check];
          arr[check] = a;
        }
    }

    }for(i = 0;i<n;i++)
    printf("%d \n",arr[i]);
} else
{
     for(i=0;i<n;i++)
    {   for(check=i+1;check<n;check++)
    {
        if(arr[i]<arr[check])
        {
          a = arr[i];
          arr[i] = arr[check];
          arr[check] = a;
        }
    }

    }for(i = 0;i<n;i++)
    printf("%d \n",arr[i]);
}

    return 0;
}
