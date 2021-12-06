#include<stdio.h>

void displaytable()
{
	int i=0;
	printf("ascii table is \n");
	printf("***************************\n");
	for(i=0;i<127;i++)
	{
	printf("%d \t %x \t %o \t %c \n",i,i,i,i);
	}
	printf("**************************\n");
}
int main()
{
displaytable();
	return 0;
}