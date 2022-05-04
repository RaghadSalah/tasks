#include <stdio.h>
#include <stdlib.h>

int add(int *p , int *q)
{
    int sum = *p + *q;
    return sum;

}

int main()
{
    int num1,num2;
    printf("Enter the first value:  ");
    scanf("%d",&num1);
    printf("Enter the second value:  ");
    scanf("%d",&num2);
    printf("The summation is %d",add(&num1 , &num2));

    return 0;
}
