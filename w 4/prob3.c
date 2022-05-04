#include <stdio.h>
#include <stdlib.h>

int main()
{  int arr[20],i,n,j;
  printf("enter the number of elements:  ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("the number %d:  ",i+1);
      scanf("%d",&arr[i]);
  }
  printf("the unique elements are:\n ");
for(i=0;i<n;i++)
  {  for(j=i+1;j<n;j++)
  {
      if(arr[i]==arr[j])
        printf("%d ",arr[i]);
  }

  }
    return 0;
}
