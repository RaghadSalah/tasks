#include <stdio.h>
#include <stdlib.h>
 struct info
{
    int salary;
    int bonus;
    int deduction;

} mohsen,maged,mariam;
int main()
{   printf("for mohsen \n");
   printf("enter the salary =  ");
   scanf("%d",&mohsen.salary);
   printf("enter the bonus = ");
   scanf("%d",&mohsen.bonus);
   printf("enter the deduction = ");
   scanf("%d",&mohsen.deduction);
   printf("***************\n");
   printf("for maged \n");
   printf("enter the salary =  ");
   scanf("%d",&maged.salary);
   printf("enter the bonus = ");
   scanf("%d",&maged.bonus);
   printf("enter the deduction = ");
   scanf("%d",&maged.deduction);
   printf("***************\n");
   printf("for mariam \n");
   printf("enter the salary =  ");
   scanf("%d",&mariam.salary);
   printf("enter the bonus = ");
   scanf("%d",&mariam.bonus);
   printf("enter the deduction = ");
   scanf("%d",&mariam.deduction);
   printf("***************\n");
   printf("the total value for mohsen = %d \n",mohsen.salary-mohsen.deduction+mohsen.bonus);
   printf("the total value for maged = %d \n",maged.salary-maged.deduction+maged.bonus);
   printf("the total value for mariem = %d \n",mariam.salary-mariam.deduction+mariam.bonus);

    return 0;
}
