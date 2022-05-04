#include <stdio.h>
#include <stdlib.h>

int main()
{ char username[20];
char password[20];
printf("enter your user name:  \n");
scanf("%s",&username);
printf("enter your password:   \n");
scanf("%s",password);
login(username,password);
}
void login( char u , char p)
{
    if(strcmp(u,"raghadsalah")== 0)
    {
        if(strcmp(p , "1234")== 0)
        printf("welcome");
        else
        printf("wrong password");
    }else
    printf("wrong user name");
}
