#include <stdio.h>
#include <stdlib.h>

int main()
{
float x,sal;
    printf("enter the working hours     \n");
    scanf("%f",&x);
    if (x<40)
    {  sal =.1*(x/2);
    sal = x*50 - sal;
       printf("the salary = %.2f egy",sal);
    }else
    {
        sal = x* 50;
        printf("the salary = %.2f egy",sal);
    }


    return 0;
}
