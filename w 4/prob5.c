#include <stdio.h>
#include <stdlib.h>

int main()
{  int arr[5][5],i,j,sumr=0,sumc=0;
   for(i=0;i<5;i++)
   {    printf("enter the row %d : ",i+1);
       for(j=0;j<5;j++)
       {
           scanf(" %d",&arr[i][j]);

       }
   }

 //the sum of rows
  printf("row totals:  ");
  for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {  sumr = sumr + arr[i][j];


       } printf("%d  ",sumr);
  sumr = 0;
   }
   // the sum of colums
    printf("colums totals:  ");
  for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {  sumc = sumc + arr[j][i];


       } printf("%d  ",sumc);
  sumc = 0;
   }
}
