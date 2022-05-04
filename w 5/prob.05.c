#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 5,y = 9, z = 8;
   int *px = &x , *py = &y , *pz = &z;
   printf("x = %d \n y = %d \n z = %d \n px = %d \n py = %d \n pz = %d \n *px = %d \n *py = %d \n *pz = %d ",x,y,z,px,py,pz,*px,*py,*pz);
   pz = px;
   px = py;
   py = pz;
    printf("x = %d \n y = %d \n z = %d \n px = %d \n py = %d \n pz = %d \n *px = %d \n *py = %d \n *pz = %d ",x,y,z,px,py,pz,*px,*py,*pz);
}
