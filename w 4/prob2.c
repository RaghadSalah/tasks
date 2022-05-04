#include <stdio.h>
#include <stdlib.h>

int main()
{  int arr[20],a,i,j;
  printf("enter the number of elements:  ");
  scanf("%d",&a);
  for(i = 0;i<a ;i++)
  {
      printf(" the number %d: ",i+1);
      scanf("%d",&arr[i]);
  }
  for(i = 0; i<a ; i++)
  {
      for(j = i+1;j<a; j++)
      {
          if(arr[i]<arr[j])
          {
              int x= arr[i];
              arr[i]=arr[j];
              arr[j] = x;
          }
      }
  } printf("the second largest number is:  %d",arr[1]);
    return 0;
}
