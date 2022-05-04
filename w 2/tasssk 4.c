#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grade;
    printf("enter your grade in percentage   ");
    scanf("%d",&grade);
    if(grade>=85)
        printf("your rate is excellent");
    else if(grade>=70)
        printf("your rate is very good");
    else if(grade>=55)
        printf("your rate is good");
    else if(grade>=40)
        printf("your rate is pass");
    else
        printf("your rate is fail");
    return 0;
}
