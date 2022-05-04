#include <stdio.h>
#include <stdlib.h>

int main()
{
 int id=123456789,id1,pass=1234,pass1,x=1;
    printf("enter your ID\n");
    scanf("%d",&id1);
    if (id1 == id)
    {
        for(x=1;x<=3;x++)
        {
            printf("enter your password\n");
            scanf("%d",&pass1);
            if(pass == pass1)
              { printf("welcome");
                break;}
        } if (pass != pass1)
        printf("you are not registerd");
    }else
    printf("wrong ID");
     return 0;
}
