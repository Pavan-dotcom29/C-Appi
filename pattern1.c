#include<stdio.h>
void display(int ino)
{
	int icnt=0;
	for(icnt=1;icnt<=ino;icnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int ivalue=0;

	printf("eneter the numeber\n");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}
