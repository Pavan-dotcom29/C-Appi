#include<stdio.h>
#include<stdbool.h>
bool checkplain(int);
int main()
{
    int ivalue=0;
    bool ret=false;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    ret=checkplain(ivalue);

    if(ret==true)
    {
        printf("number is apllindroem");
    }
    else
    {
        printf("number is not pallindrome");
    }
    return 0;
}
bool checkplain( int ino)
{
    int idigit=0,irev=0;
    int itemp=ino;
    while(ino!=0)
    {
        idigit=ino%10;
        irev=irev*10+idigit;
        ino=ino/10;
    }
    
    if(irev==itemp
    )
    {
        return true;
    }
    else{
        return false;
    }
}