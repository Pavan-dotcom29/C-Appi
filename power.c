#include<stdio.h>
int power(int,int);
int main()
{
    int ivalue1=0,ivalue2=0,ret=0;
     printf("ennter the first number\n");
     scanf("%d",&ivalue1);

     printf("enter the second number\n");
     scanf("%d",&ivalue2);

     ret=power(ivalue1,ivalue2);

     printf("poewr is :%d\n",ret);

     return 0;
}
int power(int x,int y)
{

    int icnt=0;
    int imulti=1;

    if(x<0)
    {
        x=-x;
    }
    if(y<0)
    {
        y=-y;
    }
for(icnt=1;icnt<=y;icnt++)
{
    imulti=imulti*x;
}
return imulti;
}
