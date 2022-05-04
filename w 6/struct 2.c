#include <stdio.h>
#include <stdlib.h>
struct subject
{   int ID;
    int programming;
    int data_structure;
    int Math;
    int Algorithm;
};
int main()
{  int i;
    struct subject students[10]={{1,9,8,7,6},{2,9,6,6,8},{3,7,5,8,7},{4,8,6,5,4},{5,7,4,3,8},{6,9,4,3,6},{7,9,4,5,6},{8,5,6,9,7},{9,7,5,9,8},{10,7,6,4,8}};
   int id;
   printf("enter the ID: ");
   scanf("%d",&id);
   for( i =0;i<10;i++)
   {
       if(id == students[i].ID)
       {
           printf("programming = %d\n",students[i].programming);
           printf("data structure = %d\n",students[i].data_structure);
           printf("Math = %d\n",students[i].Math);
           printf("Algorithm = %d\n",students[i].Algorithm);
           break;
       }
       else
       {
           if(i == 9)
            printf("wrong ID");
       }

   }

}
