////program to write display the numbers of didgit
#include<stdio.h>
void display();
int main()
{
    int ino=0;
    display(ino);
    return 0;
}
void display()
{
    int ino=7521;
    int idigit=0;

    idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;

    idigit=ino%10;           //1
    printf("%d\n",idigit);  //1
    ino=ino/10;             //752

    idigit=ino%10;           //2
    printf("%d\n",idigit);   //2
    ino=ino/10;              //75
    
}