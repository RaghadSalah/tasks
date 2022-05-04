#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    printf("enter your ID    ");
    scanf("%d",&id);
    if(1234==id)
        printf("your name is Harry");
    else if(5678==id)
        printf("your name is Ron");
    else if(1145==id)
        printf("your name is Hermione");
    else
        printf("wrong ID");
    return 0;
}
