#include<stdio.h>
void displaytable(int);
int main()
{
   int ivalue=0;

    printf("eneter the number\n");
    scanf("%d",&ivalue);

    displaytable(ivalue);

    return 0;
}
void displaytable(int ino)
{
    int icnt=0;
    if(ino==0)
    {
        return ;
    }
    if(ino<0)
    {
        ino=-ino;
    }
    for(icnt=1;icnt<=10;icnt++)
    {
        printf("%d\n",icnt*ino);
    } 
}


