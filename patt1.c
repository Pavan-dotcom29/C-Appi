#include<stdio.h>
void display(int ino)
{
	int icnt=0;
	for(icnt=ino;icnt>=1;icnt--)
	{
		printf("%d \t",icnt);
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
