
#include <stdio.h>
#include <stdlib.h>
int fun();
int fun(int arr[8])
{ int i,j;
printf("the repeated elements are:  ");
for(i=0;i<7;i++)
{
    for(j=i+1;j<8;j++)
    {
        if(arr[i]== arr[j])
           {
               printf("%d,  ",arr[i]);
           }
    }
}
}
int main()
{  int arr[8];
int i,j;
printf("enter the 8 elements: \n");
for(i=0;i<8;i++)
{
    scanf("%d",&arr[i]);
}

   fun(arr);

}
